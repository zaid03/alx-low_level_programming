#include "main.h"

/**
 * set_bit - Sets the value of a bit.
 * @n: pointer to the bit.
 * @index: index to set the value at.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (*n & (1L << index))
		*n = *n ^ (1L << index);
	return (1);
}
