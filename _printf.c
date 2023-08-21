#include "main.h"

/**
 * _printf - function to printf spec
 * @format: string with data to print
 *
 * Return: return int count
 **/

int _printf(const char *format, ...)
{
	int count = 0;
	const char *ptr = format;
	char specifier;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			ptr++;
			specifier = *ptr;
			if (specifier == 'c')
				count += print_char(args);
			else if (specifier == 's')
				count += print_string(args);
			else if (specifier == '%')
				count += print_percent();
			else
				return (-1);
		}
		else
		{
			putchar (*ptr);
			count++;
		}
		ptr++;
	}
	va_end(args);
	return (count);
}
