#include "holberton.h"
/**
* prime - operation of prime.
* @n: Variable.
* @i: count.
* Return: 0;
*/
int prime(int n, int i)
{
	if (n > 1)
	{
		if (n % i == 0 && i < n)
			return (0);
		else if (n % i == 0 && i == n)
			return (1);
		else
			return (prime(n, i + 1));
	}
	else
	{
		return (0);
	}

}
/**
* is_prime_number - that returns if the input integer is a prime number
* @n: Variable.
* Return: prime.
*/
int is_prime_number(int n)
{
		return (prime(n, 2));
}
