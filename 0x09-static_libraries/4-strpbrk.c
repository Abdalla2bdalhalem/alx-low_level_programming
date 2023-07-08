#include "main.h"
#include <stddef.h>
/**
 * _strpbrk-> a function that searches a string for any of a set of bytes
 *
 * @s: s is a pointer to char parameter
 * @accept: accept is a pointer to char parameter
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
				return (&s[x]);
		}
	}
	return (NULL);
}
