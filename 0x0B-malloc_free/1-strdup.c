#include "main.h"

/**
 * *_strdup - Entry point
 *
 * Description: returns a pointer to a newly allocated space in memory,
 *		which contains a copy of the string given as a parameter.
 *
 * @str: input string
 *
 *
 * Return: pointer to the array if succesful, NULL (Error)
*/


char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
