#include "main.h"

/**
 * print_square - Entry point
 *
 * Description: prints square
 *
 * @size: size of square
 *
 * Return: void
*/

void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
		_putchar(10);

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar(35);
			j++;
		}
		_putchar(10);
		i++;
	}

}
