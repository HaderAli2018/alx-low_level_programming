#include "main.h"
#include<string.h>
/**
 * _strcat - concatenates two strings.
 * @dest: character paramter
 * @src: character paramter
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, i;

	dest_len = strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
