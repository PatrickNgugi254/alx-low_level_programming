#include "main.h"

/**
 * _islower - lower case
 * @c: The character to be checked
 * Return: 0 for not lower case or 1 for lower case
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
