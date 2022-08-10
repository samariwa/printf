#include "main.h"
/* check for nulls in strings */
#define NULL_S(S) ((S) == NULL ? ("(nil)") : (S))

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
	char *s, *t;
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
		/*change after we finish print_decimal */
		count = print_decimal(va_arg(args, int));
		break;
	case 's':
		s = va_arg(args, char *);
		t = NULL_S(s);/* refer to definition */
		count = print_string(t);
		break;
	case '%':
		count = print_char('%');
		break;
	default:
		break;
	}

	return (count);
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
	int i, count;
	char *temp;
	va_list args;

	va_start(args, format);

	temp = (char *)format; /* just avoiding some errors */
	if ((_strcmp(temp, "") == 0) || format == NULL)
	{
		print_string("(nil)");
		return(-1);
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
	return(count);
}
