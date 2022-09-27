#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @s: string s
 * @c: character c
 * Return: a pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
