#include "main.h"


/**
 * *create_array - Entry point
 *
 * Description: creates an array of chars,
 *		and initializes it with a specific char.
 *
 * @size: array size
 *
 * @c: character to intialize array
 *
 * Return: pointer to the array if succesful, NULL (Error)
*/


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
