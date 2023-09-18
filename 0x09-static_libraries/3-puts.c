#include "main.h"
#include <stdio.h>

/**
 * _puts -function is used to print a null-terminated string
 * to the standard output (usually the console)
 * @s: This is a pointer to the null-terminated string
 * that you want to print to the standard output.
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
	putchar(*s);
	s++;
	}
	putchar('\n');
}
