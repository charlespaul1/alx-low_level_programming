#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints hexadecimal
 *
 * Return: 0 after succeful run
 */
int main(void)
{
	char ch;
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar(10);

	return (0);
}


