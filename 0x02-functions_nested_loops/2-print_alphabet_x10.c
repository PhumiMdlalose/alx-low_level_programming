#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 */

void print_alphabet_x10(void)

{
char alphabet;
int alphabet_10;

	for (alphabet_10 = 1; alphabet_10 <= 10; alphabet_10++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

		{
		_putchar(alphabet);
		}
	_putchar('\n');
	}
}
