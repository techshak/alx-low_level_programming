#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * Description: Get a random number and print the number
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		print("%i is zero\n", n);
	return (0);
}
