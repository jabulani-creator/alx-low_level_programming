#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: computes &  prints multiples of 3 or 5 below 1024.
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("The sum of multiples of 3 or 5 below 1024 is: %d, ", sum);

	return (0);
}
