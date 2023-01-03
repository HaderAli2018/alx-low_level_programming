#include "main.h"
#include<string.h>
/**
 * _memcpy - copies memory area.
 * @dest: character paramter
 * @src: character paramter
 * @n : int paramter
 * Return:pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
