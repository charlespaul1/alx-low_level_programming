#include "main.h"

/**
 * _pow_recursion - > returns x**y on ecursion
 * @x: number to be returned to the power of y
 * @y: the power
 * Return: x**y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
