#include "main.h"
/**
 * _puts-> a function to a string, followed by a new line
 *
 * @str: str is a pointer to string prameter
 *
 * Return: void (no return)
 */

void _puts(char *str)
{
	int x;

	for (x = 0; *(str + x) != 0; x++)
		_putchar(*(str + x));
	_putchar('\n');
}
