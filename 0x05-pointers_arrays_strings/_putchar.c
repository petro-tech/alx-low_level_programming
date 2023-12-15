#include <unistd.h>

/**
 * _putchar - writed the character c to stdout
 * @c: The character to ptint
 * Return: on success 1.
 *nOn errror, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
