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
	i = 97;

	while (i < 123){
		putchar(i);
		i++;
	}
	putchar('\n');
	
	return (0);
}
