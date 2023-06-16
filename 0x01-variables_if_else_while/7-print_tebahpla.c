#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet in lowercase & reverse using putchar.
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int i;

	i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
