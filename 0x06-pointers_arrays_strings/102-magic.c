#include <stdio.h>
/**
 * main -> adding one line
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your code here..
	 * you ara not allowed to code anything else than this line
	 */
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
