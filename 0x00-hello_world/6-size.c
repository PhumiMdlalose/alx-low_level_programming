#include <stdio.h>

/**
 * main - print out sizes of datat types in C
 * code by Phumelele Mdlalose
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %i byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %i byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %i byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %i byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %i byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
