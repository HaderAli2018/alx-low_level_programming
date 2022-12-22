#include "main.h"
#include<string.h>
#include <ctype.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: character paramter
 * Return: character return
 */
char *string_toupper(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
	s[i] = (char)toupper(s[i]);
	}
	return (s);
}
