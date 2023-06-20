#include "main.h"

/**
 * print_alphabet ->
 * a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: void (no return)
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
