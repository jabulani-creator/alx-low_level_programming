#include <stdio.h>

/**
* main - prints program name
*
* @argc: number of arguments
*
* @argv: array of arguments
*
* Return: number of arguements passed.
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
