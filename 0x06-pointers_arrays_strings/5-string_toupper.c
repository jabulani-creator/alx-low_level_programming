#include "main.h"

/**
 * *string_toupper - Entry point
 *
 * Description: changes all lowercase letters of a string to uppercase
 *
 * @str: string being checked
 *
 * Return: str
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 123)
			str[i] -= 32;
		i++;
	}
	return (str);
}
