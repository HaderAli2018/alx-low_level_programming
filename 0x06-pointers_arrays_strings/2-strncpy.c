#include "main.h"
#include <string.h>
/**
 * _strncpy -  function that copies a string.
 * @dest: character paramter
 * @src: character paramter
 * @n: number of character
 * Return: character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;

	len = strlen(dest);
	strncpy(dest, src, n);
	dest[len] = '\0';
	return (dest);
}
