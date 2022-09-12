#include <stdio.h>

/**
 * main - prints the alphabet in lowercaser,
 * then in uppercase
 * Return: 0 if successful
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);
	for (lc = 'A'; lc <= 'Z'; lc++)
		putchar(lc);
	putchar('\n');
	return (0);
}
