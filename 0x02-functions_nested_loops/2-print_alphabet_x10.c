#include "main.h"
/**
 * print_alphabet x10 in lower case
 */
void print_alphabet_x10(void)
{
	int m;
	int p;
	for (p = 0; p < 10; p++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n')
	}
}
