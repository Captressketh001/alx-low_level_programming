#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 * @dest: string to be concatenated
 * @src: strings
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		++length;
	}

	for (j = 0; src[j] != '\0'; ++j, ++length)
	{
		dest[length] = src[j];
	}

	dest[length] = '\0';

	return (dest);
}
