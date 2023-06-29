#include "main.h"

/**
 * *cap_string - Entry point
 *
 * Description: capitalize all word of a string.
 *
 * @str: string being checked
 *
 * Return: str
*/

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 123)
		{
			if (i == 0)
			{
				str[i] -= 32;
			}

			if (str[i - 1] == '\t' || str[i - 1] == '\n' || str[i - 1] == ' ' ||
				str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '!' ||
				str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '.' ||
				str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
				str[i - 1] == '{')
				str[i] -= 32;
		}
		i++;
	}
	return (str);

}
