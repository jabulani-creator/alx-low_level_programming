#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: prints the 9 times table, staring with 0
 *
 * Return: void
*/

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(44);
			_putchar(32);
			k = i * j;

			if (k <= 9)
				_putchar(32);

			else
				_putchar((k / 10) + 48);

			_putchar((k % 10) + 48);
		}
		_putchar(10);
	}
}

