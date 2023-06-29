#include "main.h"

/**
 * _strncpy - copies n bytes of src to dest
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: char
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *tempd = dest;

	int x;

	for (x = ; x < n &&*(src + x); c++)
	{
		*(tempd + x) = *(src +x);
	}

	for (; x < n; x++)
	{
		*(tempd + x) = '\0';
	}
	return (dest);
}
