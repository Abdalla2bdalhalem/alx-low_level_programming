#include <stdio.h>

/**
 * main -> Entry point.
 *
 * @argc: This is the argument count.
 * @argv: This is the argument vector.
 *
 * Return: This return to 0.
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
