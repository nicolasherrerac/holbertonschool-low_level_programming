#include <stdio.h>
/**
* main - FizzBuzz
*
* Return: 0
*/
int main(void)
{
	int ch;

	for (ch = 1; ch <= 100; ch++)
	{
		if (ch % 3 == 0 && ch % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (ch % 3 == 0)
		{
			printf("Fizz");
		}
		else if (ch % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", ch);
		}
		if (ch < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
