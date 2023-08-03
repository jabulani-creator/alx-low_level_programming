#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - Entry point
 *
 * Description: sets value of a bit to 0 at a given index
 *
 * @n: decimal number passed by pointer
 *
 * @index: index position
 *
 * Return: 1 if succesful, else -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (i = 1; hold > 0; i *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
