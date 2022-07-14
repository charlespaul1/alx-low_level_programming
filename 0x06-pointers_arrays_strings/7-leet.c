#include "main.h"

/**
 * leet -> a leet function
 * @s: string
 * Return: pointer to destination
 */
char *leet(char *s)
{
	int count = 0, i;
	int lowcase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lowcase[i] || *(s + count) == uppercase[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
