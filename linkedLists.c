#include "holberton.h"
/**
 * add_node_end - adds a node at the end of a linked list
 * @head: head of linked list
 * @str: string to be added to linked list
 * Return: pointer to the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *last;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
last = *head;
if (last != NULL)
{
while (last->next != NULL)
{
last = last->next;
}
last->next = new;
}
else
*head = new;
if (str == NULL)
{
new->str = NULL;
new->len = 0;
}
else
{
new->str = strdup(str);
new->len = (strlen(str));
}
new->next = NULL;
return (new);
}

/**
 * print_list - prints a linked list
 * @h: head of list
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
int count;
if (h == NULL)
return (0);
for (count = 0; h != NULL; h = h->next, count++)
{
if (h->str == NULL)
printf("[%i] %s\n", 0, "(nil)");
else
printf("[%i] %s\n", h->len, h->str);
}
return (count);
}
