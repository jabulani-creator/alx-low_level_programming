#include "main.h"

/**
 * _isdigit - Entry point
 *
 * Description: checks for digits 0 through 9.
 *
 * *@c: character is the argument
 *
 * Return: returns 1 if `c` is a digit
 *         otherwise always 0 (Success)
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
