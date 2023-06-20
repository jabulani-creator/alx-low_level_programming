#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints alphabet in lowercase 10 times.
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char ch;

	int i;

	i = 1;

	while (i <= 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar(10);
		i++;
	}

}
