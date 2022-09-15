#include "main.h"
#include <stdio.h>

/**
 * main - check your code
 *
 * Return: always 0
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
