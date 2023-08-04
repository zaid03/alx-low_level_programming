#include <stdlib.h>
#include <stdio.h>
#include "main.h"

void _div(unsigned long int n);
/**
  * print_binary - binary representation of a number
  * @n: binary number to represent
  *
  * Return: Nothing
  */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
