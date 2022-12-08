#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * Return: 0 if exited properly, non-zero otherwise
 *
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu byte(s)\n", sizeof(int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	printf("Size of a double: %lu byte(s)\n", sizeof(double));
	return (0);
}
