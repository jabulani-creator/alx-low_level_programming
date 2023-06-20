#include "main.h"

/**
 * print_times_table - Entry point
 *
 * Description: prints the n times table, staring with 0
 *
 * @n: is the size to timetable
 *
 * Return: void
*/

void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				_putchar(44);
				_putchar(32);
				k = i * j;

				if (k <= 9)
					_putchar(32);

				if (k <= 99)
					_putchar(32);

				if (k >= 100)
				{
					_putchar((k / 100) + 48);
					_putchar((k / 10) % 10 + 48);
				} else if (k <= 99 && k >= 10)
					_putchar((k / 10) + 48);

				_putchar((k % 10) + 48);
			}
			_putchar(10);
		}

	}
}

