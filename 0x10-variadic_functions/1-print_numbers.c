#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Main Entry
 *
 * Description: print numbers
 *
 * @n: start of input
 *
 * @separator: pointer to sepertaor
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
