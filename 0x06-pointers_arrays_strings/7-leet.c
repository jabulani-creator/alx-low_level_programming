#include "main.h"

/**
 * *leet- Entry point
 *
 * Description: encodes a string into 1337.
 *
 * @str: string to be encoded
 *
 * Return: encoded string
*/

char *leet(char *str)
{
	int i, count = 0;

	/*ASCII lowercase values of letters to be replaced*/
	int lc[] = {97, 101, 111, 116, 108};

	/*ASCII uppercase value of letters to be replaced*/
	int uc[] = {65, 69, 79, 84, 76};

	/*Corresponding 1337 values*/
	int n[] = {52, 51, 48, 55, 49};

	while (str[count] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (str[count] == lc[i] || str[count] == uc[i])
			{
				str[count] = n[i];
				break;
			}
		}
		count++;
	}
	return (str);
}
