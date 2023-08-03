#include <stdlib.h>
#include "main.h"

/**
 * get_bit - Entry point
 *
 * Description: get the value of a bit at a given index
 *
 * @n: number
 *
 * @index: index of the bit
 *
 * Return: converted value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
