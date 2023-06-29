#include "main.h"

/**
 * reverse_array - Entry point
 *
 * Description: reverses the contents of an array on intergers
 *
 * @a: array of intergers.
 *
 * @n: size of array
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{

	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
