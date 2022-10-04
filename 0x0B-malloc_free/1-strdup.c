#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - a function that returns a pointer to a newly allocated space
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 *
 * Return: a pointer to the duplicated string, NULL if error
 */

char *_strdup(char *str)
{
	char *dupl;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == 0)
		return (NULL);

	while (str[len])
		len++;

	dupl = malloc(sizeof(char) * (len + 1));

	if (dupl == NULL)
		return (NULL);

	while ((dupl[i] = str[i]) != '\0')
		i++;

	return (dupl);
}
