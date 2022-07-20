#include "main.h"
int _sqrt(int, int);

/**
 * _sqrt_recursion -> square root using recursion
 * @n: parameter to be square rooted
 * Return: squareroot of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt -> recursive quareroot
 * @n: number
 * @i: iterator
 * Return: number (which is a squareroot)
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
