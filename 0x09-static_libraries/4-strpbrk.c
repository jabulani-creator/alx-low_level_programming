#include "main.h"


/**
 * *_strpbrk - Entry point
 *
 * Description: searches a string for any of a set of bytes.
 *
 * @s: pointer to a string input.
 *
 * @accept: substring prefix.
 *
 * Return: pointer to the bytes in s.
 *	NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
