#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare two strings
 *  @s1: first ponter
 *  @s2: second pointer
 *  Return: if str1 < str2 the negative difference
 *  if str1 == str2, 0.
 *  if str1 > str2, the positive diffrence
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
