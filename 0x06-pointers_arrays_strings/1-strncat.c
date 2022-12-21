#include "main.h"
#include<string.h>
/**
 * _strncat -function that concatenates two strings.
 * @dest: character paramter
 * @src: character paramter
 * @n: size of src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, des_len;

	des_len = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[des_len + i] = src[i];
	}
	dest[des_len + i] = '\0';
	return (dest);
}
