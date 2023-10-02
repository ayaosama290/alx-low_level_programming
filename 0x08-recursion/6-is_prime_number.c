#include "main.h"
int prime(int n, int i);
/**
 * is_prime_number - checks prime num
 * Description: a function that checks whether a number is prime or not
 * @n: a parameter
 * Return: an int
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - helper function
 * Description: a function that helps the is_prime_number function
 * @n: the first parameter
 * @i: the second parameter
 * Return: an int
 */
int prime(int n, int i)
{
	if (i >= n && n > 1)
	{
		return (1);
	}
	if (n % i == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, i + 1));
	}
}
