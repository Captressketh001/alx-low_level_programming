#include <stdio.h>

/**
 * main - print lowercase alphabet except
 * letter q and e
 * Return: 0 if successful
 */
int main(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		if (lc != 'q' && lc != 'e')
		{
			putchar(lc);
		}
		lc++;
	}
	putchar('\n');
	return (0);
}
