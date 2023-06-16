#include <stdio.h>

/**
 * main - print pairs of double digit combos
 *
 * Description: prints all the combinations of two two-digits numbers. 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number1, number2, number3, number4;

	number1 = 48;
	while (number1 < 58)
	{
		number2 = 48;
		while (number2 < 58)
		{
			number4 = number2 + 1;
			number3 = number1;
			while (number3 < 58)
			{
				while (number4 < 58)
				{
					putchar(number1);
					putchar(number2);
					putchar(32);
					putchar(number3);
					putchar(number4);
					if (number1 < 57 || number2  < 56 || number3 < 57 || number4 < 57)
					{
						putchar(44);
						putchar(32);
					}
					number4++;
				}
				number4 = 48;
				number3++;
			}
			number2++;
		}
		number1++;
	}
	putchar(10);
	return (0);
}
