#include "main.h"
#include <stdlib>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **tabl;

	tabl = malloc(sizeof(*tabl) * height);

	if (width <= 0 || height <= 0 || tabl == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			tabl[i] = malloc(sizeof(**tabl) * width);
			if (tabl[i] == 0)
			{
				while (i--)
					free(tabl[i]);
				free(tabl);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			tabl[i][j] = 0;
		}
	}

	return (tabl);
}

