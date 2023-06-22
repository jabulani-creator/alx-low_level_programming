#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: checks for uppercase characters.
 *
 * *@c: character is the argument
 *
 * Return: returns 1 if `c` is uppercase
 *         otherwise always 0 (Success)
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
