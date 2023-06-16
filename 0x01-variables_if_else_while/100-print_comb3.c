#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int number1, number2;

	number1 = 48;
	number2 = 48;

	while(number1 < 58)
	{
		number2 = number1 + 1;
		while(number2 < 58)
		{
			putchar(number1);
			putchar(number2);

			if (number1 < 56 || number2 < 57)
			{
				putchar(44);
				putchar(32);
			}

			number2++;
		}

		number1++;

	}

	putchar(10);

	return (0);
}


