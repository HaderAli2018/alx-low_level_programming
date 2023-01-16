#include"main.h"
#include<stdlib.h>
#include<string.h>
/**
 * string_nconcat -  concatenates two strings.
 * @s1: char paramter
 * @s2: char paramter
 * @n: int paramter
 * Return:pointer to new location
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int len;

len = (unsigned int)strlen(s2);
if (s1 == NULL || s2 == NULL)
{
s1[0] = '\0';
s2[0] = '\0';
}
if (n >= len)
{
ptr = (char *)malloc(n);
}
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
