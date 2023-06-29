#include "main.h"

/**
 * *_strncat - Entry point
 *
 * Description: cancatenates 2 strings
 *
 * @src: src string
 *
 * @dest: dest string
 *
 * @n: number of bytes from source.
 *
 * Return: pointer dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, count;

	count = 0;
	while (dest[count])
		count++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[count + i] = src[i];

	dest[count + i] = '\0';

	return (dest);
}
