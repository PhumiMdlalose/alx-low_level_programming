#include "main.h"

/**
 *_islower - Checkes for lowercase character
 *@c: is the char to be checked
 *Return: 1 if int c is lowercase, 0 if otherwise
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
