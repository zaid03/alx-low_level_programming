#include <stdio.h>


/**
* main - prints the alphabet
*
* Return: always(success)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar ('\n');
	return (0);
}
