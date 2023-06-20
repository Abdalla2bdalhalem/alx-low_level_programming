#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	double a = 0, b = 1, c, x;

	for (x = 0; x < 50; x++)
	{
		c = a + b;
		(x == 49) ? printf("%.f", c) : printf("%.f, ", c);
		a = b;
		b = c;
	}
	putchar('\n');
	return (0);
}
