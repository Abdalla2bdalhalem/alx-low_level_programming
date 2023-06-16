#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char y;

	for (y = '0'; y <= '9'; y++)
		putchar(y);
	for (y = 'a'; y <= 'f'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
