#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Description: checks for alphabet  characters.
 *
 * *@c: character is the argument
 *
 * Return: returns 1 if `c` is alphabet character
 *         otherwise always 0 (Success)
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
