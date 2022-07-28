#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - calculates lenght of a string
 * @string: string to be calculated
 * Return: string length
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenate s1 and n bytes of s2, returning otr to string
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to concatenate from s2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, a, b;

	num = n;
	if (s1 == NULL) /* taking into account NULL strings */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /* taking into acc. negative n bytes */
		return (NULL);
	if (num >= _strlen(s2)) /* if n is too big */
		num = _strlen(s2);

	len = _strlen(s1) + num + 1; /* +1 for the null */

	ptr = malloc(sizeof(*ptr) * len); /* check 4 error and memory allocate*/
	if (ptr == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++) /* concat */
		ptr[a] = s1[a];
	for (b = 0; b < num; b++)
		ptr[a + b] = s2[b];
	ptr[a + b] = '\0';

	return (ptr);
}

