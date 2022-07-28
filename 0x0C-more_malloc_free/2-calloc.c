#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory of array using malloc
 * @nmeb: number of elements in an array
 * @size: size of the elements in the array
 *
 * Return: NULL if malloc fails or 
 * pointer to memory allocated when succesful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}

	return (p);
}
		
