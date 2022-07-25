#include "main.h"
#include <stdlib.h>
/**
 * _strdup - string duplicating function
 * @str: string to be duplicated
 * Return: a string pointer
 */
char *_strdup(char *str)
{
	char *a;
	int i, d;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (d = 0; d < i; d++)
		a[d] = str[d];
	a[d] = '\0';

	return (a);
}
