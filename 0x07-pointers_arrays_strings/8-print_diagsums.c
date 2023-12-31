#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: int pointer.
 * @size: size of the square matrix
 *
 * Return: void, no return .
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
		{
			sum += *(a + i);
		}

		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
		{
			sum2 += *(a + i);
		}
	}

	printf("%d, %d\n", sum, sum2);
}

