#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * Description: prints diagonal lines in the terminal.
 *
 * @n: number of times \ is printed
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
		_putchar(10);

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar(92);
		_putchar(10);
		i++;
	}

}
