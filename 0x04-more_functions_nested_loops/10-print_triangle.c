#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: prints triangle
 *
 * @size: size of square
 *
 * Return: void
*/

void print_triangle(int size)
{
	int i = 1, j, k;

	if (size <= 0)
		_putchar(10);

	while (i <= size)
	{
		j = size - i;
		while (j > 1)
		{
			_putchar(' ');
			j--;
		}
		k = 1;
		while (k <= i)
		{
			_putchar(35);
			k++;
		}
		_putchar(10);
		i++;
	}

}
