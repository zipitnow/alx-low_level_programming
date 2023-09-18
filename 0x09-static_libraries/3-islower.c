#include "main.h"
#include <stdio.h>

/**
 * _islower -  function character checking function in C that
 * checks whether a given character c is a lowercase letter
 *@c: character for checking
 *Return: result
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
