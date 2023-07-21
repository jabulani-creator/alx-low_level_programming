#include <stdarg.h>
#include <stdio.h>
/**
 *  print_strings - Main Entry
 *
 * Description: print strings
 *
 * @n: start of input
 *
 * @separator: pointer to sepertaor
 *
 * Return: void
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int index;
	char *str;

	va_start(arg, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && index != n - 1)
			printf("%s", separator);
	}

	va_end(arg);
	printf("\n");
}
