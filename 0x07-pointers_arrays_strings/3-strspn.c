#include "main.h"


/**
 * *_strspn - Entry point
 *
 * Description: gets the length of a prefix substring
 *
 * @s: pointer to a string input.
 *
 * @accept: substring prefix.
 *
 * Return: number of nytes in s.
*/


unsigned int _strspn(char *s, char *accept)
{
	int i, j, swtch;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		swtch = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				swtch = 0;
				break;
			}
			j++;
		}
		if (swtch == 1)
			break;
		i++;
	}

	return (i);
}
