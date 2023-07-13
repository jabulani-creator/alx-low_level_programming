#include "main.h"

/**
 * *string_nconcat - Entry point
 *
 * Description: concatenates two strings.
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * @n: total bytes of @s2 to add to @s1 to be a new string
 *
 * Return: pointer to new string if succesful, NULL (Error)
*/


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = len2 = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	str = (char *) malloc((len1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
