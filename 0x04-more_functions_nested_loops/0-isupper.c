#include "main.h"
#include <stdio.h>
/**
 * _isupper - function that checks for uppercase charaters
 * @c: character to check
 * Return: 1 for uppercase, 0 otherwise
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
