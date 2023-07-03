#include "main.h"


/**
 * *_memset - Entry point
 *
 * Description: fills memory with constant byte
 *
 * @s: pointer to memory to be filled
 *
 * @b: char to copy
 *
 * @n: number of bytes to be filled.
 *
 * Return: pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
