#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds to numbers
 * @argc: argc parameter
 * @argv: argv array
 * Return: 0 as succesful
 */
int main(int argc, char *argv[])
{
	int result = 0, num, i, j, k;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
}
