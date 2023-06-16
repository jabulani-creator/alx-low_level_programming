#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet in lowercase using putchar.
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int i;
	int j;

	i = 97;
	j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (j < 91)
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}
