#include "main.h"
/**
 * print_alphabet_x10 -> prints the lowercase alphabets
 */
void print_alphabet_x10(void);
{
	int m;
	char p;

	for (m = 0; m < 10; m++)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
		_putchar('\n')
	}
}
