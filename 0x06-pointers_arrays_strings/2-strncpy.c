#include "main.h"

/**
 * *_strncpy - Entry point
 *
 * Description: copies a string
 *
 * @src: src string
 *
 * @dest: dest string
 *
 * @n: number of bytes from source.
 *
 * Return: pointer dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
