#include "main.h"
#include <stdio.h>

/**
 * print_rev - print reverse of a string
 *
 * @s: this is the input of string
 *
 */

void print_rev(char *s)
{
	int index;

	for(index = 0; str[index] != '\0'; index ++)
	{
		;
	}
	for(index = index - 1; str[index] != '\0'; index --)
	{
		putchar(s[index]);

	}
	putchar('\n');
}
