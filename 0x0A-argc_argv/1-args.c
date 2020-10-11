#include <stdio.h>
/**
* main - print the number of arguments.
* @argc: number of arguments.
* @argv: value of each arguments.
* Return: 0;
*/
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
