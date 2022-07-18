#include "main.h"
#include <string.h>

/**
 * _memset -> a memory set function
 * @s: string
 * @b: character
 * @n: integer
 * Return: sting
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s)
}
