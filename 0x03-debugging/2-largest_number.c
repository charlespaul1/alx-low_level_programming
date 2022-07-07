#include "main.h"

/**
 * largest_number - returns the larget of 3 numbers
 * @a: first integer or number
 * @b: second integer or number
 * @c: third integer or number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
