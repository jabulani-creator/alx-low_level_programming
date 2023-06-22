#include "main.h"

/**
* main - Entry Point
*
* Description: prints the work putchar
*
* Return:return 0
*/

int main(void)
{
	char output[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(output[i]);
	}
	_putchar(10);
	return (0);
}
