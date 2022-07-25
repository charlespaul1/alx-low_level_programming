#include "main.h"

/**
 * str_concat - string concatinating fucntion
 * @s1: first string
 * @s2: second string
 * Return: first string + second string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, g = 0, h = 0, j = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[g])
		g++;

	h = i + g;
	s = (char *)malloc(h * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	g = 0;
	while (j < h)
	{
		if (j < i)
			s[j] = s1[j];
		if (j >= i)
		{
			s[j] = s2[g];
			g++;
		}
		j++
	}
	s[j] = '\0';
	return (s);
}
