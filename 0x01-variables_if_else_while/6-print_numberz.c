#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints single digits of base 10 fro 0
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		write("%d", n);
	}
	write("\n");
	return (0);
}
