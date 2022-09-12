#include <stdio.h>

/**
 * main - print the lowercase alphabet in reverse,
 * followed by a new line
 * Return: 0 if successful
 */
int main(void)
{
	char lc;

	for (lc = "z"; lc >= "a"; lc--)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
