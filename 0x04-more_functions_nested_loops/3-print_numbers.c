#include "main.h"

/**
<<<<<<< HEAD
 * print_numbers - A function that prints the
 * numbers, from 0 to 9, followed by a new line.
 */

=======
 * print_numbers - A function that prints the numbers from 0 to 9
 * followed by a new line.
 */
>>>>>>> a245d5ed9cdae16194ab8eedb4cb5ed1a270a42c
void print_numbers(void)
{
	int i;

<<<<<<< HEAD
	for (i = '0'; i <= '9'; i++)
=======
	for (i = '0'; i < '9'; i++)
>>>>>>> a245d5ed9cdae16194ab8eedb4cb5ed1a270a42c
	{
		_putchar(i);
	}
	_putchar('\n');
}
