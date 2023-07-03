#include "main.h"

/**
 * _memset()-> a function that fills memory with a constant byte
 *
 * @s: s is a pointer to char parameter
 * @b: b is a char
 * @n: n is an unsigned int
 *
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; x < (int)n; x++)
		s[x] = b;
	return (s);
}
