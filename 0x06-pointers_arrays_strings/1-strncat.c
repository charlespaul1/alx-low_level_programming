#include "main.h"
#include <string.h>

/**
 * _strncat -> functinon to append char
 * @dest: parameter one
 * @src: parameter two
 * @n: parameter three
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
