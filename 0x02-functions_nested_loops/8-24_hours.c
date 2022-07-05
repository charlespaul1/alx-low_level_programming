#include "main.h"
/**
 * jack_bauer -> prints every minute of the day
 */
void jack_bauer(void)
{
	int m, j;

	for (m = 0; m < 24; m++)
	{
		for (j = 0; j < 60; j++)
		{
			if (m < 10)
			{
				_putchar('0');
				_putchar(m + '0');
			}
			else if (m >= 10)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			if (j < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar((j + '0');
			}
			else if (j > 10)
			{
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
