#include "main.h"

/**
 * _prime - calculates if a number is prime.
 *
 * @n: number to evaluate
 *
 * @i: operand
 *
 * Return: 1 if n is prime, 0 if not
 */
int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}

/**
 * is_prime_number - Entry point
 *
 * Description: returns 1 if the input integer is a prime number,
 *		otherwise return 0.
 *
 * @n: number.
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}
