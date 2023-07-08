#include <stdio.h>
#include <stdlib.h>

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
	int x, mul;

	mul = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (x = 1; x < argc; x++)
		mul *= atoi(argv[i]);
	printf("%d\n", mul);
	return (0);
}
