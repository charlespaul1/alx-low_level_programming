#include "main.h"

/**
 * print_diagonal -> printing diagonal line
 * @n: integer parameters
 */
void print_diagonal(int n)
{
	int x, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
}
