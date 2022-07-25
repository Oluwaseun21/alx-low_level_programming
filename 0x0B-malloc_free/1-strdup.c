#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied.
 * Return: pointer to the duplicated string on success and NULL otherwise
 */

char *_strdup(char *str)
{
	char *dup;
	int i, j = 0;

	if (!str)
	return (NULL);

	while (*(str + j))
	j++;
	j++;
	dup = malloc(sizeof(char) * j);
	if (dup == NULL)
{
	return (NULL);
}
	for (i = 0; i <= j; i++)
{
	dup[i] = str[i];
}
	return (dup);
}
