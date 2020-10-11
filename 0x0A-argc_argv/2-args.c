#include <stdio.h>
/**
* main - print all arguments.
* @argc: number of arguments.
* @argv: value of each arguments.
* Return: 0;
*/
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);
	return (0);
}
