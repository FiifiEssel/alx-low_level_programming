#include "main.h"

/**
 * _isdigit - checks if a character is a digit or not
 * @c: character for testing
 * Return: 1 if the character is a digit and 0 if the character is not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
