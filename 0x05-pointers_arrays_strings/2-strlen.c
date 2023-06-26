#include "main.h"

/**
 * _strlen-> a method to calculate the length of string
 *
 * @s: s is a pointer to char parameter
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int x, count = 0;

	for (x = 0; *(s + x) != 0; x++)
		count++;
	return (count);
}
