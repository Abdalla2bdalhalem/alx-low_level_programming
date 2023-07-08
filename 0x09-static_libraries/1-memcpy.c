#include "main.h"
/**
 * _memcpy-> a function that copies memory area.
 *
 * @dest: dest is a pointer to char parameter
 * @src: src is a pointer to char parameter
 * @n: n is an unsigned int
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;

	for (x = 0; x < (int)n; x++)
		dest[x] = src[x];
	return (dest);
}
