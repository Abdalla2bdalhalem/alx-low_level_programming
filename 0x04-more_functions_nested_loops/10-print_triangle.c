#include "main.h"

/**
 * print_triangle -> a function that prints a triangle
 *
 * @size: size is an integer argument
 *
 * Return: void (no return)
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = x; y < size; y++)
				_putchar(' ');
			for (z = 0; z < x; z++)
				_putchar('#');
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
