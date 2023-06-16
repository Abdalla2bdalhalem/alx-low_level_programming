#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char y = 'a';

	while (y <= 'z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
