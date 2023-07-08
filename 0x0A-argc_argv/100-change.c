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
	int x, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	while (x >= 0)
	{
		if (x >= 25)
			x -= 25;

		else if (x >= 10)
			x -= 10;

		else if (x >= 5)
			x -= 5;

		else if (x >= 2)
			x -= 2;

		else if (x >= 1)
			x -= 1;
		else
			break;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
