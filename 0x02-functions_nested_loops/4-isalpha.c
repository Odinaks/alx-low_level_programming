#include "main.h"
/**
 * int _isalpha - checks alphabetic characters
 * @c: is the character to be checked
 * Returns: 1 if c is is a letter, 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
