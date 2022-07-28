#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an arrayof integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer of the new created array else NULL
 * if malloc fails or min > max
 */
int *array_range(int min, int max)
{
	int range, a;
	int *p;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	p = malloc(range * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (a = 0; a < range; a++)
	{
		*(p + a) = min + a;
	}

	return (p);
}
