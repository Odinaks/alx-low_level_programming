#include "main.h"

/**
<<<<<<< HEAD
 * print_most_numbers - A function that prints
 * the numbers, from 0 to 9, except  2 and 4
 */

=======
 * print_most_numbers - a function that prints the numbers from 0 to 9,
 * except 2 and 4 .
 */
>>>>>>> a245d5ed9cdae16194ab8eedb4cb5ed1a270a42c
void print_most_numbers(void)
{
	int i;

<<<<<<< HEAD
	for (i = '0'; i <= '9'; i++)
=======
	for (i = '0'; i < '9'; i++)
>>>>>>> a245d5ed9cdae16194ab8eedb4cb5ed1a270a42c
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
