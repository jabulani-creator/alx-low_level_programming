#include "main.h"

/**
 * set_string - Entry point
 *
 * Description: sets the value of a pointer to a char.
 *
 * @s: pointer value
 *
 * @to: value to be pointed to
 *
 * Return: void.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
