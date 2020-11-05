#include "holberton.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int count, exp;

	if ((b == NULL) || (*b != '0' && *b != '1'))
		return (0);

	for (count = 0; b[count] != '\0'; count++)
	{
		;
	}
	num = exp = 0;
	count--;
	for (; count >= 0;)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);

		num += (b[count] - 48) * (1 << exp);
		exp++, count--;
	}
	return (num);
}