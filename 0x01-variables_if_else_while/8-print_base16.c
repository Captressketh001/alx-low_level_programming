#include <stdio.h>

/**
 * main - print all base 16 in lowercase,
 * followed by a new line
 * Return: 0 if successful
 */
int main(void)
{
	int digits;
	char lc;

	for (digits = 48; digits < 58; digits++)
	{
		putchar(digits);
	}
	for (lc = 'a'; lc <= 'f'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
