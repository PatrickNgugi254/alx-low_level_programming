#include "main.h"

/*
 * _isalpha - c is alphabet
 * Returns: 1 if true 0 if false
 */

int _alpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
