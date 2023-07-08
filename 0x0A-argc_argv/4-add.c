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
	int sum = 0, x;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			int y;
			char *arg;

			arg = argv[x];
			for (y = 0; arg[y] != '\0'; y++)
			{
				if (arg[y] < 48 || arg[y] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (x = 1; x < argc; x++)
	{
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
