#include <stdlib.h>

/**
 * *malloc_checked - Entry point
 *
 * Description: allocates memory using malloc
 *
 * @b: number of bytes
 *
 * Return: pointer to new allocated memory, if succesful, 98 (Error)
*/

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
