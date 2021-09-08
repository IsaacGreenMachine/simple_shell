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

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _strcmp - compares chars of strings.
 * @s1: string1
 * @s2: string2
 *
 * Return: difference of strings or 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
int n;
while (*s1 != 0 && *s2 != 0)
{
n = *s1 - *s2;
s1++;
s2++;
if (n != 0)
{
break;
}
}
return (n);
}

/**
 * _strlen_recursion - returns length of passed string
 * @s: pointer to start of string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
if (*s == 0)
{
return (0);
}
else
{
s++;
return (_strlen(s) + 1);
}
}


