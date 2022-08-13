#include "main.h"

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
