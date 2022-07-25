#include "main.h"
#include <stdlib.h>

/**
 * str_concat - string concatinating 2 fucntions
 * @s1: first string
 * @s2: second string
 * Return: first string + second string
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, g, h;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	a = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (a == NULL)
		return (NULL);

	for (g = 0, h = 0; g < (i + j + 1); g++)
	{
		if (g < i)
			a[g] = s1[g];

		else
			a[g] = s2[h++];
	}

	return (a);
}


