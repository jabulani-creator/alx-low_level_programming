#include "main.h"

/**
 * print_rev - Entry point
 *
 * Description: prints string in reverse
 *
 * *@s: string  parameter
 *
 * Return: void
*/

void print_rev(char *s)
{
	int index, count;

	count = 0;
	while (s[count] != '\0')
		count++;

	for (index = count - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar(10);
}
