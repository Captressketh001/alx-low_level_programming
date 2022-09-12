#include <stdio.h>

/**
 * main - print all single number of base 10 followed,
 * a new line
 * Return: 0 if successful
 */
int main(void)
{
	int digits;

	for (digits = 48; digits < 58; digits++)
		putchar(digits);
	putchar("\n");
	return (0);
}
