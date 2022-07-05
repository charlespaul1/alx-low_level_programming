#include "main.h"
/**
 * prints last digit of a number
 */
int print_last_digit(int)
{
	int m;
	if (n < 0)
		n = -n;
	m = n % 10;
	if m < 0
		m = -m;
	_putchar(m + '0');
	return (m);
}
