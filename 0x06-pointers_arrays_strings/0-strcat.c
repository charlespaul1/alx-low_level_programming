#include "main.h"

/**
 * _strcat -> this is a function
 * @dest: 1st parameter
 * @src: 2nd parameter
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\n';
	return (dest);
}

