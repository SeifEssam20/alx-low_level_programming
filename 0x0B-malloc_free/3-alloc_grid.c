#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional integer grid
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: a pointer to the newly created grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i;
int j;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
/* free previously allocated memory */
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}

/* initialize all elements to 0 */
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
