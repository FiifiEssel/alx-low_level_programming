#include "main.h"

/**
 * _isupper - Determines if a character is upper case or not
 * @c: Character to be tested
 * Return: 1 if the character is uppercase else return 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
