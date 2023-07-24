#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int n, row, sum, dig_1, dig_2;

	for (row = 0; row <= 9; row++)
	{
		for (n = 0; n <= row; n++)
		{

		sum = row * n;
		dig_1 = ((sum / 10) + '0');
		dig_2 = ((sum % 10) + '0');

		if (sum <= 9)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(dig_2);
		}
		else
		{	
			_putchar(' ');
			_putchar(dig_1);
			_putchar(dig_2);
		}
		_putchar(',');
		}
		_putchar('\n');
	}
}
