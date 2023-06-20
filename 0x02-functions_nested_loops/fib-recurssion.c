#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints first 50 Fibonacci starting with 1 & 2.
 *
 * Return: always 0 (success)
*/


int fib(int number);

int main()
{
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("%d,", fib(i));
	}
	printf("\n");

	return (0);
}


int fib(int number)
{
	if (number == 0 || number == 1)
	{
		return number;
	} else {
		return fib(number - 1) + fib(number - 2);
	}
}

