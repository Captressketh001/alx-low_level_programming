#include <stdio.h>

/**
 * main - print combination of a single digit,
 * followed by a new line
 * Return: 0 if successful
 */
int main(void)
{
	int sd;

	for (sd = 48; sd < 58; sd++)
	{
		putchar(sd);
		if (sd != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
