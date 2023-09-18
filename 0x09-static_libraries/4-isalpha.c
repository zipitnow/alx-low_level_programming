#include "main.h"
#include <stdio.h>

/**
 * _isalpha -  function is a custom implementation of a
 * character checking function in C that checks
 * whether a given character c is an alphabetic character
 * (either an uppercase letter or a lowercase letter)
 * @c: an alphabetic character
 * Return: 0 as true
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
