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
int mult, num1, num2;

if (argc < 2)
{
printf("Error");
printf("\n");
return (1);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mult = (num1*num2);
printf("%d", mult);
printf("\n");
return (0);
}
}
