#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: The char to be checked.
 * Return: 1 if c is a letter, lowercase or uppercase returns 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
