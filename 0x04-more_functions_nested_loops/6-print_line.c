#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: prints straight lines in the terminal.
 *
 * @n: number of times _ is printed
 *
 * Return: void
*/

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(95);
		i++;
	}

	_putchar(10);

}
