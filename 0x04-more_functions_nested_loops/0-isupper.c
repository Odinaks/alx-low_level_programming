/**
<<<<<<< HEAD
 * _isupper - a function that checks for uppercase character.
 * @c: the character to check
=======
 * _isupper - function that checks for uppercase charaters
 * @c: character to check
>>>>>>> a245d5ed9cdae16194ab8eedb4cb5ed1a270a42c
 * Return: 1 for uppercase characters, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
