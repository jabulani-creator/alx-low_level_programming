#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: write a program that finds and prints the sum of the
 * even-valued terms, followed by a new line.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long number1 = 0, number2 = 1, number3 = 0, sum;

	while (number3 < 4000000)
	{
		number3 = number1 + number2;
		number1 = number2;
		number2 = number3;

		if (number1 % 2 == 0)
			sum += number1;

	}
	printf("%lu\n", sum);

	return (0);
}
