#include "main.h"
/**
 * rev_string-> a function to reverse string
 *
 * @s: s is a pointer to string
 *
 * Return: void (no return)
 */

void rev_string(char *s)
{
	int x, count = 0;
	char tmp;

	for (x = 0; *(s + x) != 0; x++)
		count++;

	for (x = 0; x < count / 2; x++)
	{
		tmp = *(s + x);
		*(s + x) = *(s + (count - x - 1));
		*(s + (count - x - 1)) = tmp;
	}
}
