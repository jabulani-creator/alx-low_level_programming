#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digits seperated by ,  using putchar
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
		if (number == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
