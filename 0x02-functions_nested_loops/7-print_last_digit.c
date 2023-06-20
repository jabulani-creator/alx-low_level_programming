#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: prints the last digit of the input n.
 *
 * *@n: int used as argument
 *
 * Return: returns the last last digit.
*/

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
		last = last * -1;

	_putchar(last + 48);
	return (last);
}
