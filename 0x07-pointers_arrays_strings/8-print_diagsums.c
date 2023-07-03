#include "main.h"
#include <stdio.h>

/**
 * print_diagsums-> a function that prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: a is a pointer to int parameter
 * @size: size is an int argument
 *
 * Return: void(No return)
 */

void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += *(a + (size * x + x));
		sum2 += *(a + (size * x + size - 1 - x));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
