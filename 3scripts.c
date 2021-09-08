#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: final destination of catted strings
 * @src: string to be catted to dest
 *
 * Return: pointer to start of catted strings
 */
char *_strcat(char *dest, char *src)
{
char *i = dest;
char *j = src;
while (*i != 0)
{
i++;
}
while (*j != 0)
{
*i = *j;
i++;
j++;
}
*i = 0;
return (dest);
}
