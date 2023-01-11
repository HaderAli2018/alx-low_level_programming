#include"main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * checkNum - check nuber
 * @str: char paramter
 * Return: 1 if digit
 */
int checkNum(char *str)
{
unsigned int counter;

while (counter < strlen(str))
{
if (!isdigit(str[counter]))
{
return (0);
}
counter++;
}
return (1);
}
/**
 * main - main function
 *@argc: int paramter
 *@argv: char paramter
 *Return:1 if success
 */
int main(int argc, char *argv[])
{
int i, strToin;

int sum = 0;
i = 1;
while (i < argc)
{
if (checkNum(argv[i]))
{
strToin = atoi(argv[i]);
sum += strToin;
}
else
{
printf("Error\n");
return (1);
}
i++;
}
printf("%d\n", sum);

return (0);
}
