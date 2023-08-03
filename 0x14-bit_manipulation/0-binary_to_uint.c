#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number as a string
 *
 * Return: unsigned int equivalent of b, or 0 if b is invalid or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int gfk = 0;

	if(!b)
		return (0);
	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		gfk = gfk << 0;
		if (*b == '1')

			gfk += 1;
	}
	return (gfk);
}
