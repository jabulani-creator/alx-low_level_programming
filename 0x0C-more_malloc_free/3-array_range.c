#include <stdlib.h>

/**
 * *array_range - Entry point
 *
 * Description: creates an array of intergers.
 *
 * @min: minimum number of elememnts
 *
 * @max: maximum number of elements
 *
 * Return: pointer to array if succesful, NULL (Error)
*/

int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
