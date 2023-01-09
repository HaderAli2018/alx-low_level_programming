#include"main.h"
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main -  print multiple number
 * @argc: int paramter
 * @argv: char paramter
 * Return: 1 if success
 */
int main(int argc, char *argv[])
{
int mult = 1, i;

if (argc < 2)
{
printf("Error\n");
return (1);
}
else
{
for (i = 1; i < argc; i++)
{
mult *= atoi(argv[i]);
}
printf("%d\n", mult);
return (0);
}
}
