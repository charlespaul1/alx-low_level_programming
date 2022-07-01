#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assign number to variable each time it is executed
 * Return: 0 as succesful
 */
int main(void)
{
int n;
int m;

srand(time(0));
n = rand() - RAND_MAX / 2;

m = n % 10;
printf("Last digit of %d is %d ", n, m);
if (m > 5)
{
	printf("greater than 5");
}
if (m == 0)
{
	printf(" and is 0");
}
if (m < 6 && m != 0)
{
	printf("less than 6 not 0");
}

printf("\n");

return (0);
}
