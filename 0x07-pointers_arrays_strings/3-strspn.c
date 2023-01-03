#include"main.h"
#include<string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: char paramter
 * @accept:char paramter
 * Return:number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
