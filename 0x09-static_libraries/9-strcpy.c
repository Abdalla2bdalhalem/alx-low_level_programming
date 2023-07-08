#include "main.h"
/**
 * _strcpy-> a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @dest: dest is a pointer to string parameter
 * @src: src is a pointer to string parameter
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x, count = 0;

	for (x = 0; *(src + x) != 0; x++)
		count++;
	for (x = 0; x < count; x++)
		*(dest + x) = *(src + x);
	*(dest + x) = '\0';
	return (dest);
}
