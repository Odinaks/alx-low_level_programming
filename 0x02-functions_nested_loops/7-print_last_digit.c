#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: is thenumber to check last digit
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int lastnum;

	lastnum = n % 10;
	if (lastnum < 10)
		lastnun = 0 - lastnum;
	_putchar(lastnum + '0');
	return (lastnum);
}
