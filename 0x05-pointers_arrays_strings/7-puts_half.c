#include "main.h"
/**
 * puts_half->  a function that prints half of a string
 *
 * @str: str is a pointer to string parameter
 *
 * Return: void (no return)
 */

void puts_half(char *str)
{
	int x, count = 0, n = 0;

	for (x = 0; *(str + x) != 0; x++)
		count++;

	if (count % 2 == 0)
		n = count / 2;
	else
		n = (count - 1) / 2 + 1;

	for (x = n; *(str + x) != 0; x++)
		_putchar(*(str + x));

	_putchar('\n');
}
