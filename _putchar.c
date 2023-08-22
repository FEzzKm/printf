#include <unistd.h>

/**
 * _putchar - write character c to the stdout
 * @c: character
 * Return: 1 on success else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
