#include "main.h"
#include <stddef.h>
/**
 * _strchr-> a function that locates a character in a string
 *
 * @s: s is a pointer to char parameter
 * @c: c is a char argument
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != 0; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	if (s[x] == c)
		return (&s[x]);
	return (NULL);
}
