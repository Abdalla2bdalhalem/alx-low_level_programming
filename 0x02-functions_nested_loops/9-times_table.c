#include "main.h"
/**
 * times_table -> a function that prints the 9 times table, starting with 0.
 *
 * Return: void(no return)
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num  <= 9; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; muit++)
		{
			res = num * mult;
			_putchar(',');
			_putchar(' ');
			(prod / 10) ? _putchar('0' + prod / 10) : _putchar(' ');
			_putchar('0' + prod % 10);
		}
		_putchar('\n');
	}
}
