#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c;
	int x;

	srand(time(0));
	while (x <= 2645)
	{
		c = rand() % 128;
		x += c;
		putchar(c);
	}
	putchar(2772 - x);
	return (0);
}
