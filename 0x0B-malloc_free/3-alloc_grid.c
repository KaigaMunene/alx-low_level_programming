#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to a 2d array of integers
 *
 * @width: integer
 * @height: integer
 *
 * Return:	Null if width or height is 0 or negative
 *		Null on failure
 *
 */

int **alloc_grid(int width, int height)
{
int **grid;
int i;
int j;
int k;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
while (i >= 0)
{
free(grid[i]);
i--;
}
free(grid);
return (NULL);
}
}

for (j = 0; j < height; j++)
{
for (k = 0; k < width; k++)
grid[j][k] = 0;
}
return (grid);

}
