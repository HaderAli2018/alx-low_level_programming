#include"main.h"
#include<string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: char paramter
 * @accept : char paramter
 * Return:pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *result;

	result = strpbrk(s, accept);
	if (result)
	{
	return (result);
	}
	return (0);
}
