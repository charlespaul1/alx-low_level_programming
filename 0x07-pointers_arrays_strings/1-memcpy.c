#include "main.h"

/**
 * _memcpy -> copies memory area
 * @dest: destination of the memory
 * @src: source of the memory
 * @n: number of bytes to be copied
 * Return: string copied from the source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
