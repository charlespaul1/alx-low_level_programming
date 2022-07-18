#include "main.h"

/**
 * print_chessboard -> prints the chesboard
 * @a: array of pieces
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int m, n;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}

		_putchar('\n');
	}
}
