#include "main.h"


/**
 * _print_rev_recursion - Entry point
 *
 * Description: prints string in reverse
 *
 * @s: pointer to string to be printed.
 *
 * Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
