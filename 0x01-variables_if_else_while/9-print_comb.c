#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints all possible cominations of
 *single digit numbers
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(48 + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}

	putchar('\n');
	return (0);
}
