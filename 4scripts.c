#include "holberton.h"
/**
 * _strdup - duplicates one string into another
 * @str: the string to be duplicated
 *
 * Return: a pointer to a duplicate of the string
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);
	for (size = 0; *(str + size) != '\0'; size++)
		;
	ar = malloc((size + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		ar[i] = str[i];
	}
	ar[i] = '\0';
	return (ar);
}

/**
 * _strncmp - function to compare strings
 * @s1: first string to compare
 * @s2: second string to compare
 * @len: length of string to compare
 * Return: 0 for success
 */

int _strncmp(char *s1, char *s2, int len)
{
	for (; *s1 && *s2 && len >= 0; len--)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (-1);
	}
	return (0);
}
