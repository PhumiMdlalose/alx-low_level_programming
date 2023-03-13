#include <stdio.h>

/**
 * main - write a program that prints its name, followed by a new line.
 * @argc: counts the number of elements
 * @argv: passes argument to the string.
 * Return: new name, if program is renamed
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
