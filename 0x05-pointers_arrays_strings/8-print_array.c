#include "main.h"
#include<stdio.h>
/**
 * print_array - Entry point
 *
 * Description:  prints n intergers of an array, followed by a new line.
 *
 * *@a: array to be printed
 *
 * *@n: number of items to be printed
 *
 * Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	_putchar(10);
}
