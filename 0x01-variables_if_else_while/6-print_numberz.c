#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 If Success
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
