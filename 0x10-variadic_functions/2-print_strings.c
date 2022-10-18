#include "variadic_functions.h"

/**
 * print_strings - function to print strings
 * @separator: the string to be printed between the strings
 * @n: number of integer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strg;

	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		strg = va_arg(str, char *);

		if (!strg)
			strg = "(nil)";
		else if (!separator)
			printf("%s", strg);
		else if (separator && i == 0)
			printf("%s", strg);
		else
			printf("%s%s", separator, strg);
	}

	printf("\n");

	va_end(str);
}
