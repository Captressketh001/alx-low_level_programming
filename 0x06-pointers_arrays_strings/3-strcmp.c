#include "main.h"

/**
 * _strcmp - function that compares 2strings
 * @s1: first string
 * @s2: second string
 * Return: the compared string
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i] == '\0'; i++)
	{
		return (0);
	}

	return (*s1 - *s2);

}
