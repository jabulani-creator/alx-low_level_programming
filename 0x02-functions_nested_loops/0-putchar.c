#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char output[] = "_putchar";

	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(output[i]);
	}

	_putchar(10);

	return (0);
}
