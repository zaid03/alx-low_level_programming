#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints diffrent text according to number
* 
* Return: always(success)
*/

int main(void)
{
	int n, lastd;
        
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

        if (lastd < 5)
        {
             printf("the last digit of %d is %d and is greater than 5\n", n, lastd);
        }
        else if (lastd == 0)
        {
             printf("the last digit of %d is %d and is 0\n", n, lastd);
        }
        else if (lastd < 6 && lastd != 0)
        {
             printf("the last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
        }
	return (0);
}
