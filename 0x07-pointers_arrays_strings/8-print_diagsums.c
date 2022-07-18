#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of 2 diagonals of square matrix
 *
 * @a: the matrix
 * @size: size
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int m, sum1 = 0, sum2 = 0;

	for (m = 0; m < size; m++)
	{
		sum1 += a[(size + 1) * m];
		sum2 += a[(size - 1) * (m + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
