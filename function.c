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
	putchar (c);
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
		putchar (*s);
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
	putchar ('%');
	return (1);
}
