#include "main.h"

/**
 * swap_int - swaps value of a and b
 *
 * @a: first entry point
 * @b: second entry point
 *
 */

void swap_int(int *a, int *b)
{
	int pepe;

	pepe = *a;
	*a = *b;
	*b = pepe;
}
