#include "main.h"



/**
 *
 *  * print_last_digit - prints the last digit of a number
 *
 *   * @n: the int to extract the last digit from
 *
 *    * Return: value of the last digit
 *
 *     */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
