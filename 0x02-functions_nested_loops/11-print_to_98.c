#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: int to be passed.
 */

void print_to_98(int n)
{
	int num;
	if (n <= 98)
	{
		for (int num = n; num <= 98; num++)
		{
			printf("%d, ", num);
		}
	}
	else
	{
	for (int num = n; num > 98; num--)
	{
		printf("%d, ", num);
	}
	}
	printf("98\n");
}
