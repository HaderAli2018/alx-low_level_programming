#include "main.h"
#include<string.h>
/**
 * _strchr - locates a character in a string
 * @s : char paramter
 * @c : char paramter
 * Return:pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	char *found;

	found = strchr(s, c);
	if (found)
	{
	return (found);
	}
	return (0);
}
