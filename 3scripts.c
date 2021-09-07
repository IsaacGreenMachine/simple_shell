#include "holberton.h"
/**
 * freeArgv - frees an argv array of strings.
 * @argv: argv array of strings
 * Return: void
 */
void freeArgv(char **argv)
{
int i;
for (i = 0; argv[i] != NULL; i++)
{
free(argv[i]);
}
}
