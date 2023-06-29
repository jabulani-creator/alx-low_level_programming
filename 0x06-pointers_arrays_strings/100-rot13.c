#include "main.h"

/**
 * *rot13- Entry point
 *
 * Description: encodes a string into rot13
 *
 * @str: string to be encoded
 *
 * Return: encoded string
*/

char *rot13(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (str[count] >= 65 && str[count] <= 90)
			str[count] = ((str[count] - 65 + 13) % 26) + 65;
		else if (str[count] >= 97 && str[count] <= 123)
			str[count] = ((str[count] - 97 + 13) % 26) + 97;
		count++;
	}

	return (str);
}
