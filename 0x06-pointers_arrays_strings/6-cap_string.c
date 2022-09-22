#include "main.h"

/**
 * *cap_string - a function that capitalizes all words of a string
 * @s: sting to be converted
 * Return: the capitalised string
 */

char *cap_string(char *s)
{
	int x, y;

	char separator[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};

	for (x = 0; s[x] != '\0'; x++)
	{
		if (x == 0 && s[x] >= 'a' && s[x] <= 'z')
			s[x] -= 32;

		for (y = 0; y < 13; y++)
		{
			if (s[x] == separator[y])
			{
				if (s[x + 1] >= 'a' && s[x + 1] <= 'z')
				{
					s[x + 1] -= 32;
				}
			}
		}
	}
	return (s);

}
