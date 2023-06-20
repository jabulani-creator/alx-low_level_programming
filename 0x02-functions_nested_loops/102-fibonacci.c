#include<stdio.h>


/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *		starting with 1 and 2 folled by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;
	unsigned long number1 = 0, number2 = 1, sum;

	while (i < 50)
	{
		sum = number1 + number2;
		printf("%lu", sum);

		number1 = number2;
		number2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
		i++;
	}

	return (0);
}
