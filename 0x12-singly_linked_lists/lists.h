#ifndef LISTS_H
#define LISTS_H
#include<stdlib.h>
/**
 * struct node - stuct contain 2 node
 * @str: char paramter
 * @len: int paramter
 * @next: pointer of node
 */
typedef struct node
{
char *str;
int len;
struct node *next;
} list_t;
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
