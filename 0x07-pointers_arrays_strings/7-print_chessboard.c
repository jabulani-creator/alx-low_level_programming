#include "main.h"


/**
 * print_chessboard - Entry point
 *
 * Description: prints the chessboard
 *
 * @a: pointer to an array of 8 characters.
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;
	while (i < 64)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			_putchar(10);
		}

		_putchar(a[i / 8][i - j]);
		i++;
	}
	_putchar(10);
}
