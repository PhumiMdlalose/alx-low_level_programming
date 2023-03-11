#include "main.h"
#include <stdio.h>

/**
 * _strstr - entry point
 * @haystack: input
 * @needle: input
 * Return: a pointer to the beginning of the located substring or
 * NULL if substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	/**
	 * we init a helping var
	 * to help in returning one
	 * of the parameters pointer haystack
	 */

	char *a, *n;

	while (*haystack != '\0')
	{
		a = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (a);
		haystack++;
	}
	return ('\0');
}
