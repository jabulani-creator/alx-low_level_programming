#include "main.h"


/**
 * _puts_recursion - Entry point
 *
 * Description: prints string, followed by newline
 *
 * @s: pointer to string to be printed.
 *
 * Return: void
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar(10);
}
