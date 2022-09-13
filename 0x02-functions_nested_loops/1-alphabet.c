#include "main.h"

/**
 * print_alphabet - print lowercase alphabet,
 * followed by a new line
 */
void print_alphabet(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		_putchar(lc);
		lc++;
	}
	_putchar('\n');
}
