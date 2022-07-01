#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints alphabet in reverse
 *
 * Retur: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10);

	return (0);
}
