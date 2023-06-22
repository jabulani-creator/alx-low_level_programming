#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: prints numbers 0 to 14, 10 times.
 *
 * Return: void
*/

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);

		}

		_putchar(10);

	}

}
