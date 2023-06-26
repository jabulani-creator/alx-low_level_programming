#include "main.h"

/**
 * _puts - Entry point
 *
 * Description: prints a string, followed by a new line, to stdout
 *
 * *@str: string  parameter
 *
 * Return: void
*/

void _puts(char *str)
{

	while (*str)
		_putchar(*str++);
	_putchar(10);
}
