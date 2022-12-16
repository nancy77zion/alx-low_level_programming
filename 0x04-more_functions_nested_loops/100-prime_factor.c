#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 61285247513
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = i;
		n = n / i;
	}
	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
