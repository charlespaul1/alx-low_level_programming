#include <stdio.h>
int length(char *s);
int exponent(int len);
int total(char *s);
int neg(char *s, int p);

/**
 * _atoi - Converts numbers in a string to integers
 * @s: string
 * Return: String number converted to int
 */
int _atoi(char *s)
{
	int i;
	int len;
	int number;
	unsigned int body;
	int expt;
	int total_len;
	int negatives;

	len = length(s);
	expt = exponent(len);
	total_len = total(s);
	body = 0;
	for (i = total_len - len; s[i] != '\0'; i++)
	{
		number = (s[i] - 48) * expt;
		body = number + body;
		expt = expt / 10;
	}
	negatives = neg(s, total_len - len);
	if (negatives % 2 != 0)
		body = -body;
	return (body);
}

/**
 * length - Calculates the length of the number
 * @s: string
 * Return: The length of the number
 */
int length(char *s)
{
	int i;
	int len;

	for (i = 0, len = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			len++;
			if (s[i + 1] == 32) /* stopping for spaces*/
				break;
		}
	}
	return (len);
}

/**
 * exponent - Calculates the exponent to multiply the number by
 * @len: length of a number
 * Return: The exponent of a number
 */
int exponent(int len)
{
	int expt;

	for (expt = 1; len - 1 > 0; len--)
	{
		expt =  expt * 10;
	}
	return (expt);
}

/**
 * total - Calculates the total length of a string up to the numbers
 * @s: string
 * Return: Total len of a string
 */
int total(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (s[i + 1] < 48 || s[i + 1] > 57)
			{
				i++;
				break;
			}
		}
	}
	return (i);
}

/**
 * neg - Calculates the total number of negatives
 * @s: string
 * @p: position were the number starts in the string
 * Return: Total count of negatives
 */
int neg(char *s, int p)
{
	int i;
	int counter;

	for (counter = 0, i = 0; i < p; i++)
	{
		if (s[i] == 45)
			counter++;
	}
	return (counter);
}