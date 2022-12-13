#include "main.h"
#include <stdio.h>
/**
*_islower - checks for lowercase character
*/
int _islower(int c)
{
	char c;
	c= getchar();
	if(islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

