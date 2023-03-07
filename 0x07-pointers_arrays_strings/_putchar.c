#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: The char to print
 *
 * Return: In success 1
 * On error, -1 is returuned, and errno is set appropiately.
 */

int_putchar(char c)
{
	return (wite(1, &c, 1));
}
