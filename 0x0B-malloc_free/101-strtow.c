#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array.
 * @g: 2 dimensional array of char.
 * @h: height of the array.
 */

void ch_free_grid(char **g, unsigned int h)
{
	if (g != NULL && h != 0)
{
	for (; h > 0; h--)
	free(g[h]);
	free(g[h]);
	free(g);
}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **s;
	unsigned int c, h, i, j, a1;

	if (str == NULL || *str == '\0')
	return (NULL);
	for (c = h = 0; str[c] != '\0'; c++)
	if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
	h++;
	s = malloc((h + 1) * sizeof(char *));
	if (s == NULL || h == 0)
{
	free(s);
	return (NULL);
}
	for (i = a1 = 0; i < h; i++)
{
	for (c = a1; str[c] != '\0'; c++)
{
	if (str[c] == ' ')
	a1++;
	if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
{
	s[i] = malloc((c - a1 + 2) * sizeof(char));
	if (s[i] == NULL)
{
ch_free_grid(s, i);
	return (NULL);
}
	break;
}
}
	for (j = 0; a1 <= c; a1++, j++)
	s[i][j] = str[a1];
	s[i][j] = '\0';
}
	s[i] = NULL;
	return (s);
}
