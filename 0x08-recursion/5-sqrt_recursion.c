#include "main.h"

/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @x: squared number
 *
 * Return: the square root of n
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}


/**
 * _sqrt_recursion - Entry point
 *
 * Description: returns the natural square root of a number.
 *
 * @n: number
 *
 * Return: natural sqaure root of n.
*/
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (_sqrt(0, n));
}
