#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: checks for lowercase characters.
 *
 * *@n: character is the argument
 *
 * Return: returns 1 if `n` is greater than 0
 *         returns -1 if `n` is less than 0
 *         otherwise always 0 (Success)
*/


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
