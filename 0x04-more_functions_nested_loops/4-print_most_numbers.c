#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: prints numbers from 0 to 9 except 2 & 4
 *
 * Return: void
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 4) || (i == 2))
			continue;
		_putchar(i + 48);
	}
	_putchar(10);

}
