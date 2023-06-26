#include "main.h"
/**
 * print_rev-> a function to print string in reverse order
 *
 * @s: s is a pointer to string parameter
 *
 * Return: void (no return)
 */

void print_rev(char *s)
{
	int x, count = 0;

	for (x = 0; *(s + x) != 0; x++)
		count++;

	for (x = count - 1; x >= 0; x--)
		_putchar(*(s + x));
	_putchar('\n');
}
