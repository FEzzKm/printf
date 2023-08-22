#include "main.h"

/**
 * print_char - function to print char
 * @args: char
 *
 * Return: int 1
 **/

int print_char(va_list args)
{
	int c;

	c = va_arg(args, int);
	_putchar (c);
	return (1);
}

/**
 * print_string - function to print str
 * @args: string
 *
 * Return: int count
 **/

int print_string(va_list args)
{
	int count = 0;
	char *s;

	s = va_arg(args, char *);
	while (*s != '\0')
	{
		_putchar (*s);
		s++;
		count++;
	}
	return (count);
}

/**
 * print_percent - fct to print percent
 * Return: int 1
 **/

int print_percent(void)
{
	_putchar ('%');
	return (1);
}

/**
 * print_decimal - function to print str
 * @args: int
 *
 * Return: int count
 **/

int print_decimal(va_list args)
{
	int dec, i = 0, count = 0;
	char buffer[15];

	dec = va_arg(args, int);
	if (dec == 0)
	{
		_putchar('0');
		count++;
	}
	if (dec < 0)
	{
		_putchar('-');
		count++;
		dec *= -1;
	}
	while (dec > 0)
	{
		buffer[i++] = '0' + (dec % 10);
		count++;
		dec /= 10;
	}
	while (i-- > 0)
		_putchar(buffer[i]);
	return (count);
}
