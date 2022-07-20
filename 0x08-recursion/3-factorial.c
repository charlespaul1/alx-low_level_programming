#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: number to find its factorial
 * Return: -1 when n < 0  ( indicating error)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
