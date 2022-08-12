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
	char *s, *r;
	int count, i = 0, j = 0;
	unsigned int p;
	bool format_in_unsigned_array = false, format_in_signed_array = false;
	char unsigned_specifiers[5] = {'o', 'b', 'x', 'X', 'u'};
	char signed_specifiers[3] = {'c', 'i', 'd'};
	int (*print_unsigned_func_arr[])(unsigned int) = {
	print_octal, print_binary,print_hexadecimal_small, print_hexadecimal_caps, 
	print_unsigned
	};
	int (*print_signed_func_arr[])(int) = {
        print_char, print_int, print_decimal
        };

	for (; i < 5; i++)
	{
		if (format == unsigned_specifiers[i])
		{
			format_in_unsigned_array = true;
			break;
		}
	}
	for (; j < 3; j++)
        {
                if (format == signed_specifiers[j])
                {
                        format_in_signed_array = true;
                        break;
                }
        }
	if (format_in_signed_array == true)
		count = (*print_signed_func_arr[j])(va_arg(args, int));
	else if (format_in_unsigned_array == true)
                count = (*print_unsigned_func_arr[i])(va_arg(args, unsigned int));
	else
	{
		switch (format)
		{
		case 's':
			s = va_arg(args, char *);
			if (NULL_S(s) == -1)
				return (-1);
			count = print_string(s);
			break;
		case 'r':
			r = va_arg(args, char *);
			count = print_rev(r);
			break;
		case 'p':
			p = (uintptr_t)va_arg(args,void *);
			count = print_pointer(p);
			break;	
		case '%':
			count = print_char('%');
			break;
		default:
			count = -1;
			break;
		}
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
