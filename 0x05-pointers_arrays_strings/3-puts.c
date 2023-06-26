#include "main.h"

/**
 * _puts - prints strings followed by a line to stdout 
 * 
 * @str: this is the input string
 *
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar (str[index]);
	}
	_putchar('\n');
}
