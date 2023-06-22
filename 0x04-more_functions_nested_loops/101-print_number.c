#include "main.h"

/**
 * print_number - Entry point
 *
 * Description: prints interger.
 *
 * @n: function arguement.
 *
 * Return: void
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar(45);
		num = -num;
	}
	if (num > 9)
		print_number(num / 10);

	_putchar((num % 10) + 48);
}
