#include "main.h"
#include <stdio.h>
#include<string.h>
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @x: character paramter
 * Return: char
 */
char *cap_string(char *x)
{
	int i, len;

	len = strlen(x);
	for (i = 1;i < len;i++)
	{
	if (isalpha(x[i]) && x[i - 1] == ' ')
	{
	x[i] = toupper(x[i]);
	}
	}
return (x);
}
