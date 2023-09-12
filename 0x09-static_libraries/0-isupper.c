#include "main.h"
#include <stdio.h>

int _islower(int c)
{
	if(c >= 97 && c <= 122)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
