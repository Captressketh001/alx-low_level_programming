#include <stdio.h>

/**
 * main - print lowercase alphabet followed by,
 * a new line with putchar
 * Return: 0 if sucessful
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
