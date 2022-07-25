#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer of an array of integers on success and NULL otherwise
 */

int **alloc_grid(int width, int height)
{
	int **G, i, j;

	if (width < 1 || height < 1)
{
	return (NULL);
}
	G = malloc(sizeof(int *) * height);
	if (G == NULL)
{
	return (NULL);
}
	for (i = 0; i < height; i++)
{
	G[i] = malloc(sizeof(int) * width);
	if (G[i] == NULL)
{
	for (; i >= 0; i--)
{
	free(G[i]);
}
	free(G);
	return (NULL);
}
	for (j = 0; j <= width; j++)
{
G[i][j] = 0;
}
}
	return (G);
