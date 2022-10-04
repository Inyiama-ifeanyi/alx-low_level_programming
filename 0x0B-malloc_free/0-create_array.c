#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y;

	if ( size == 0)
	{
		return (NULL);
	}
	else
	{
		y = malloc(sizeof(char) * size);
		if (y == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				y[i] = c;
			}
		}
	}
	return (y);
}
