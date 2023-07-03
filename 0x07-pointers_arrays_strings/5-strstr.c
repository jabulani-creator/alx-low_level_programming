#include "main.h"


/**
 * *_strstr - Entry point
 *
 * Description: locates a substring
 *
 * @haystack: pointer to a string we are searching from.
 *
 * @needle: pointer to the substring we want to find.
 *
 * Return: pointer to beginning of located substring in haystack.
 *	NULL if substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return ('\0');
}
