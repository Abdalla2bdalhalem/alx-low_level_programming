#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int y = 48;

	while (y != 58)
	{
		putchar(y);
		if (y != 57)
		{
			putchar(',');
			putchar(' ');
		}
		y++;
	}
	putchar('\n');
	return (0);
}
