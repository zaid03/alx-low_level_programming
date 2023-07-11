#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	char *cnct;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	cnct = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (cnct == NULL)
	{
		return (NULL);
	}
	strcpy(cnct, s1);
	strcat(cnct, s2);
	return (cnct);
}
