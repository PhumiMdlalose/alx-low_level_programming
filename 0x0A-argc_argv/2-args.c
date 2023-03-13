#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 * @argc: counts the number of elements
 * @argv: passes argument to the string array.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		{
		printf("%s\n", argv[i]);
		}

	return (0);
}
