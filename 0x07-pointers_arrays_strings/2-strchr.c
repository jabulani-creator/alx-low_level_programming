#include "main.h"


/**
 * *_strchr - Entry point
 *
 * Description: locate character in a string
 *
 * @s: pointer array to a string input.
 *
 * @c: character to be found in array.
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 *	or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return ('\0');
}
