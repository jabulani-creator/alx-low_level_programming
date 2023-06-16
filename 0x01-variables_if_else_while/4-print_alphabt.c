#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet in lowercase except e & q.
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int i;

	i = 97;

	while (i < 123)
	{
		if (i == 101 || i == 113)
		{
			i++;
			continue;
		}		
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
