#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: no of integers expected
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(num, int));
		else if (separator && i == 0)
			printf("%d", va_arg(num, int));
		else
			printf("%s%d", separator, va_arg(num, int));
	}
	va_end(num);

	printf("\n");
}
