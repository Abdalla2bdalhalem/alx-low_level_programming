#include <stdio.h>

/**
 * print_to_98 -> a function that prints all natural numbers from n to 98.
 *
 * @n: n is an integer argument
 *
 * Return: void (no return)
 */
void print_to_98(int n)
{
	int count;

	if (n <= 98)
	{
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	}
	else
	{
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	}
	printf("%d\n", count);
}
