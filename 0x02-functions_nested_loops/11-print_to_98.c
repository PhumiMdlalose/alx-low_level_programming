#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: int to be passed.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int n; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
	for (int n; n > 98; n--)
	{
		printf("%d, ", n);
	}
	}
	printf("98\n");
}
