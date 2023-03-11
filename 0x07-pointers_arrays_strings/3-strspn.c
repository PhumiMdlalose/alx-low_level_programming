#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int j, k, l;

	j = 0;
	while (s[j] != '\0')
	{
		k = 0;
		l = 1; /*flag status*/
		while (accept[k] != '\0')
		{
			if (s[j] == accept[k])
			{
				l = 0;
				break;
			}
			k++;
		}
		if (l == 1)
			break;
		j++;
	}

	return (j);

}
