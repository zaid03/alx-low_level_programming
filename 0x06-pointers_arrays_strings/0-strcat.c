#include "main.h"

/**
 * _strcat - append a string to another
 * @dest: char
 * @srcc: char
 *
 * Return: char
 *
 */

char *_strcat(char *dest, char *src)
{
	int lenth = 0;
	while (*dest != '\0')
	{
		dest++;
		length++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
		length++;
	}

	*(dest + 1) = '\0';
	dest = dest - length;
	return (dest);
}
