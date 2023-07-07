#include "main.h"

/**
 * _strlen - Entry point
 *
 * Description: returns length of string
 *
 * *@s: string  parameter
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		++s;
	}
	return (i);
}
