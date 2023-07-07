#include "main.h"

/**
 * _strcmp - Entry point
 *
 * Description: compares two strings
 *
 * @s1: first string to be compared.
 *
 * @s2: second string to be compared.
 *
 * Return: 0 if s1 and s2 are the same, less than 0 if s1<s2,
 *	greater than 0 if s1>s2.
*/

int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
