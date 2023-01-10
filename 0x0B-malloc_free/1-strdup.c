#include"main.h"
#include<string.h>
#include<stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space
 * @str: char paramter
 * Return:pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
char *ptr = (char *)malloc(1 * (sizeof(str)));
if (ptr == 0)
{
return (NULL);
}
else
{
if (str == NULL)
{
return (NULL);
}
else
{
ptr = str;
return (ptr);
}
}
}
