#include <stdio.h>

/**
* main - prints the alphabet in lowercase then uppercase
* 
* Return: always(success)
*/

int main(void)
{
	int n;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
