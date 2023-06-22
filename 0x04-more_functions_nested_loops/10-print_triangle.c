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
	int i, j;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (i = 1; i <= size; ++i)
		{
			for (j = 1; j <= size; ++j)
			{
				if ((i + j) <= size)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar(10);
		}
	}
}
