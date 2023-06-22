#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: finds &  prints the largest prime factor of 612852475143.
 *
 * Return: always 0 (success)
*/

int main(void)
{
	unsigned long int i, number = 612852475143;

	for (i = 3; i < 782849; i += 2)
	{
		while ((number % i == 0) && (number != i))
		{
			number /= i;
		}
	}
	printf("%lu\n", number);

	return (0);
}
