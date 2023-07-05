#include "main.h"


/**
 * factorial - Entry point
 *
 * Description: returns factorial of given number
 *
 * @n: number whose factorial we are finding.
 *
 * Return: n!
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
