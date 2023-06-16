#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char y;

	for (y = 'z'; y >= 'a'; y--)
		putchar(y);
	putchar('\n');
	return (0);
}
