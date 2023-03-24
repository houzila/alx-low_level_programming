#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long n, max_factor;
	long x = 612852475143;
	double square_root = sqrt(x);

	for (n = 1; n <= square_root; n++)
	{
		if (x % n == 0)
		{
			max_factor = x / n;
		}
	}

	printf("%ld\n", max_factor);
	return (0);
}
