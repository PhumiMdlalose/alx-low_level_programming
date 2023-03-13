#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argc: counts the number of elements
 * @argv: passes argument to the string array.
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
