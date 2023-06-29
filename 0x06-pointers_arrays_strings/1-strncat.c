#include "main.h"
/**
 * _strncat -> a function that concatenates two strings.
 *
 * @dest: dest is a pointer to char parameter
 * @src: src is a pointer to char parameter
 * @n: n is an integer argument
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y = 0;

	for (x = 0; dest[x]; x++)
		;
	for (; y < n && src[x]; y++)
	{
		dest[x] = src[y];
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
