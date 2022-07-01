#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - it assigns a random number to a variable
 *  positive n negative
 * Return: 0
 */
int main(void)
{
int b;

srand(time(0));
b = rand() - RAND_MAX / 2;
if (b > 0)
	printf("%d is positive\n", b);
if (b == 0)
	printf("%d is zero\n", b);
if (b < 0)
{
	printf("%d is negative\n", b);
}
return (0);
}
