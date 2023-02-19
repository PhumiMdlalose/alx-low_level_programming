#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random it with 5
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
