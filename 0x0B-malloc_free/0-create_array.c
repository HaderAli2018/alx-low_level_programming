#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * create_array - t creates an array of chars
 * @size: int paramter
 * @c: char paramter
 * Return:pointer to the array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;

if (size > 0)
{
char *ptr = (char *)malloc(size);
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
else
{
return (NULL);
}
}
