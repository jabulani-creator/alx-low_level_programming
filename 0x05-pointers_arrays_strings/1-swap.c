#include "main.h"

/**
 * swap_int - Entry point
 *
 * Description: swaps the value of two intergers
 *
 * @a: first int parameter
 *
 * @b: second int parameter
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
