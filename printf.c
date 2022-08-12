#include "main.h"
/* check for nulls in strings */
#define NULL_S(S) ((S) == NULL ? (-1) : (1))

/**
 * print_args - print given variadic arguments given type specifier from printf
 * @args: all the ... arguments
 * @format:the current suspect specifier
 *
 * Return: no of chars printed or error
 * Description:
 * j will be used to loop through the real specifiers for each of the
 * suspect specifiers to know if they are real.
 * if they are real, we'll use the switch statement to print the ... var
 * correctly.
 * if they are not, we can print an error message, or just skip it,
 * depending on which stage this program is on
 */
int print_args(const char format, va_list args)
{
	char *s;
	int count;

	switch (format)
	{
	case 'c':
		count = print_char(va_arg(args, int));
		break;
	case 'i':
		count = print_int(va_arg(args, int));
		break;
	case 'd':
		count = print_decimal(va_arg(args, int));
		break;
	case 'b':
		count = print_binary(va_arg(args, int));
		break;
	case 'x':
		count = print_hexadecimal(va_arg(args, int), 'x');
		break;
	case 'X':
		count = print_hexadecimal(va_arg(args, int), 'X');
		break;
	case 's':
		s = va_arg(args, char *);
		if (NULL_S(s) == -1)
			return (-1);
		count = print_string(s);
		break;
	case '%':
		count = print_char('%');
		break;
	default:
		count = -1;
		break;
	}

	return (count);
}

/**
 * check_null - check if the _printf function has
 * a string that does not act as we expect
 * this has nothing to do with our variadic
 * @format: the string we wanna check
 * Return: 0 if ok else -1
 */
int check_null(const char *format)
{
	char *temp;
	int i, j, r_val = 1;
	char options[] = {'c', 's', 'd', 'i', '%', '\0'};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	/* check for % without correct specifiers */
	i = 0;
	temp = (char *)format;
	while (i < _strlen(temp))
	{
		j = 0;
		while (j < 5)
		{
			if ((format[i] == '%' &&
			     format[i + 1] == options[j] &&
			     (i + 1) < _strlen(temp)))
			{
				r_val = 0;
			}
			if (format[i] == '%' &&
			    (i + 1) >= _strlen(temp))
			{
				r_val = -1;
				break;
			}

			j++;
		}
		i++;
	}
	/* check if there was a mismatch with our flags */
	if (r_val < 0)
	{
		return (-1);
	}
	return (0);
}

/**
 * _printf - prints anything, clone for printf()
 * @format:string to be printed
 * if string is null, prints nil
 *
 * Return: no of chars printed or error
 */
int _printf(const char *format, ...)
{
	int i, count, isnull;
	char *temp;
	va_list args;

	isnull = check_null(format);
	if (isnull < 0)
	{
		return (-1);
	}

	va_start(args, format);

	temp = (char *)format; /* just avoiding some errors */
	if (_strcmp(temp, "") == 0)
	{
		print_string("(nil)");
		return (-1);
	}

	count = 0;
	i = 0;
	while (i < _strlen(temp))
	{
		if (format[i] == '%')
		{
			/* hoping that args will sort everything out */
			count += print_args(format[i + 1], args);
			i = i + 2;
		}
		else
		{
			print_char(format[i]);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
