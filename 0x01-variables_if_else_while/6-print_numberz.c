#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digits in base 10 from 0 using putchar
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');

	putchar('\n');

	return (0);
}
