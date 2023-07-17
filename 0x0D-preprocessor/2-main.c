#include <stdio.h>

/**
 * main - the name of the file it was compiled from is printed
 *
 *
 * Return: always 0
 */
int main(void)
{
	return (printf("%s\n", __FILE__), 0);
}
