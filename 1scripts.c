#include "holberton.h"
/**
 * argvSetup - takes in a string as input and returns an array of strings
 * @input: string of input
 * Return: array of strings
 */
char **argvSetup(char *input)
{
char **argv;
int i;
argv = malloc(sizeof(char *) * 32); /*need to fix "32". */
argv[0] = strtok(input, " \n"); /*fill argv[0] from input, set up strtok*/
i = 1;/*setup for argv*/
while (1 != 0) /*filling rest of argv*/
{
argv[i] = strtok(NULL, " \n");
if (argv[i] == NULL)/*end of string, put NULL as last value of array*/
{
break;
}
i++;/*increment*/
}
return (argv);
}

/**
 * pathChecker - takes in a command and sets commandPath to path used in execve
 * @command: a given command
 * Return: true path of command
 */
char *pathChecker(char *command)
{
struct stat sb;
char *path;
if (stat(command, &sb) == 0)
{
return (command);
}
else
{
path = getPath();
path = which(path, command);
if (stat(path, &sb) == 0)
{
return (path);
}
else
{
return (NULL);
}
}
}

/**
 * getPath - gets the path from the environ variable
 * Return: path
 */
char *getPath()
{
int i;
char *str;
for (i = 0; environ[i] != NULL; i++)
{
if (strncmp(environ[i], "PATH", 4) == 0)
{
str = strdup(environ[i]);
return (str);
}
}
return (NULL);
}

/**
 * freeAndExit - frees and exits passed info
 * @argv: array of strings
 * @i: int
 * Return: void
 */
void freeAndExit(char **argv, int i)
{
free(argv);
exit(i);
}
