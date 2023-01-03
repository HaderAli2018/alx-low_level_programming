#include"main.h"
#include<string.h>
/**
 * _strstr -  locates a substring.
 * @haystack: char paramter
 * @needle : char paramter
 * Return:pointer to the beginning of the located substrin
 */
char *_strstr(char *haystack, char *needle)
{
	char *found_string;

	found_string = strstr(haystack, needle);
	if (found_string != NULL)
	{
		return (found_string);
	}
	return (0);
}
