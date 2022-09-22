#include "main.h"

/**
 * *leet - a function that encodes a string into 1337
 * @s: string expected
 * Return: leet
 */

char *leet(char *s)
{
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == a[y])
			{
				s[x] = b[y];
			}
		}
	}
	return (s);
}
