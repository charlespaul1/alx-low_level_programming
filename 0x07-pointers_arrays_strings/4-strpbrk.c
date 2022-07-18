#include "main.h"

/**
 * _strpbrk -> searches a string for any set of bytes
 * @s: string to be searched
 * @accept: ste of bytes to be searched for
 *
 * Return: if a set is matched - a pointer to the matched byte is returned
 *	if not matched - NULL is returned
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}

		s++;
	}
	return ('\0');
}
