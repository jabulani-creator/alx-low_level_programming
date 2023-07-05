#include "main.h"

/**
 * wildcmp - Entry point
 *
 * Description: compares 2 strings if identical returns 1, otherwise 0.
 *
 * @s1: string to be checked
 *
 * @s2: string that contain the special character *.
 *
 * Return: 1 if identical, 0 otherwise
*/

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == *s1)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	return (0);
}
