#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: num to be input
 * Return: value of the last digit
 */

int print_last_digit(int n)

{
	int last_dig = n % 10;

	if (n < 0)
	{
	last_dig = last_dig * -1;
	}

	_putchar(last_dig + '0');
	return (last_dig);
}
