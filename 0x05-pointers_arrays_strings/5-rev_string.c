#include "main.h"

/**
 * rev_string - Entry point
 *
 * Description: reverses string
 *
 * *@s: string  parameter
 *
 * Return: void
*/

void rev_string(char *s)
{
	int i, len1 = 0, len2 = 0;
	char tmp;

	while (s[len1] != '\0')
		i++;

	len2 = len1 - 1;
	for (i = 0; i < len1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len2];
		s[len2--] = tmp;
	}
	_putchar(10);
}
