#include <stdio.h>
#include <stdlib.h>
/**
* main - program that adds positive numbers.
* @argc: number of arguments.
* @argv: value of each arguments.
* Return: 0.
*/
int main(int argc, char *argv[])
{
	int c, p, suma = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (c = 0; c < argc; c++)
	{
		for (p = 0; argv[c][p]; p++)
		{
			if (argv[c][p] < '0' || argv[c][p] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		suma += atoi(argv[c]);
	}
	printf("%d\n", suma);
	(void)argv;
	return (0);
}
