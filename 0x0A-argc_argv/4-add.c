#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i, total;

	if (argc == 1)
	{
		printf("0");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (sizeof(argv[i]) != sizeof(int))
			{
				printf("Error\n");
			}
			else
			{
				total += atoi(argv[i]);
			}
		}
	}

	return (0);
}
