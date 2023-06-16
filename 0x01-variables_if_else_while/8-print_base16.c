#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int number;

	number = 48;

	while (number <= 102)
	{
		putchar(number);

		if (number == 57)
			number += 39;
		++number;
	}
	putchar('\n');

	return (0);
}
