#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
void putchar(void);
int main(void)
{
	putchar(void);
	return (0);
}
void putchar(void)
{
	printf("\n\nLower case characters:\n");
	for (i = 'a'; i <= 'z'; i++)
		printf("%c", i);
}
