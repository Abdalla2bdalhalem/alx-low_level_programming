#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, res = 0;

	for (x = 3; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
			res += x;
	}
	printf("%d\n", res);
	return (0);
}
