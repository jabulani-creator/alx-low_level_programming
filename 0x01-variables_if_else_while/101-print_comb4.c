#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits.
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int number1, number2, number3;

	number1 = 48;
	number2 = 48;
	number3 = 48;

	while (number1 < 58)
	{
		number2 = number1 + 1;
		while (number2 < 58)
		{
			number3 = number2 + 1;
			while (number3 < 58)
			{
				putchar(number1);
				putchar(number2);
				putchar(number3);
				if (number1 < 55 || number2 < 56 || number3 < 57)
				{
					putchar(44);
					putchar(32);
				}

				number3++;
			}

			number2++;

		}

		number1++;
	}

	putchar(10);

	return (0);
}


