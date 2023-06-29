#include "main.h"

/**
 * _strncat -  concatenates two strings
 * @dest: char
 * @src: chr
 * @n: int
 *
 * Return: char
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int length1 = 0;
	int x;

	while (*dest != '\0')
	{
		dest++;
		length++;
	}
	length1 = length;
	for (x = 0; x < n && *src; dest++, src++, length++, x++)
	{
		*dest = *src;
	}
	if (length1 n >= length)
	{
		*(dest + length) = '\0';
	}
	dest = dest - length;
	return (dest);
}
