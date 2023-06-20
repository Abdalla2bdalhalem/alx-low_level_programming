#include "main.h"

/**
 * print_times_table -> function that prints the n times table,starting with 0.
 *
 * @n: n is an integer argument
 *
 * Return: void (no return)
 */
void print_times_table(int n)
{
	int x, y, res;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				res = i * y;
				_putchar(',');
				_putchar(' ');
				(res > 99) ? _putchar('0' + res / 100) : _putchar(' ');
				(res > 9) ? _putchar('0' + res / 10 % 10) : _putchar(' ');
				_putchar('0' + res % 10);
			}
			_putchar('\n');
		}
	}
}
