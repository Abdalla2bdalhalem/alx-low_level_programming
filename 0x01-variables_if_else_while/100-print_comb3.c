#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{

	int x = 49;
	int y = 48;

	while (y != 58)
	{
		while (x != 58)
		{
			if (x != y && y < x)
			{
				putchar(y);
				putchar(x);
				if (x == 57 && y == 56)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			x++;
		}
		x = 49;
		y++;
	}
	putchar('\n');
	return (0);

}
