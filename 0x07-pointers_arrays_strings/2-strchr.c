#include "main.h"

/**
 * _strchr - a function that locates a char in a string
 *
 * @s: a pointer given by main
 * @c: the char to look for
 *
 * description: returns the first occurance of the char c in string
 * Return: returns a pointer to the first occurance
 */

char *_strchr(char *s, char c)
{
	int i = 0;


	while (s[i] != c)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (c == 0)
	{
		return (s + i);
	}
	return (0);
}
