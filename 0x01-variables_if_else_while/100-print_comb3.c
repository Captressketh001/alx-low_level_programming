#include <stdio.h>

/**
 * main - print the combination of two digits
 * Return: 0 if sucessful
 */
int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			putchar(x);
			putchar(y);	
			if (x != 57 || y != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
