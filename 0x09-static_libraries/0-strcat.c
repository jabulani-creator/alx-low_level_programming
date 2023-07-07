#include "main.h"

/**
 * *_strcat - Entry point
 *
 * Description: concatenates two strings.
 *
 * @src: src string
 *
 * @dest: dest string
 *
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int count_1, count_2;

	count_1 = 0;

	while (dest[count_1])
		count_1++;

	for (count_2 = 0; src[count_2] ; count_2++)
		dest[count_1++] = src[count_2];

	return (dest);
}
