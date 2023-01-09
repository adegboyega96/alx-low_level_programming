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

	if (argc == 3)
	{
		for (i = 0; i < argc; i++)
		{
			total = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n",total);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
