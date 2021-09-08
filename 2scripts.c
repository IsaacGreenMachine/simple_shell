#include "holberton.h"
/**
 * which - returns path of command or NULL if fails
 * @path: true path of command
 * @commandName: name of command to be found
 * Return: true path of command or NULL
 */

char *which(char *path, char *commandName)
{
char *s1, *s2;
list_t *head = NULL;
list_t *current;
struct stat sb;
int i;
s1 = strtok(path, "=:\n ");
current = add_node_end(&head, s1);
while (current->str != NULL)
{
s1 = strtok(NULL, "=:\n ");
if (s1 != NULL)
{
s2 = malloc(strlen(s1) + strlen(commandName) + 2);
if(s2 == NULL)
{
printf("MALLOC FAILED!!\n");
}
*s2 = '\0';
strcat(s2, s1);
strcat(s2, "/");
strcat(s2, commandName);
strcat(s2, "\0");
current = add_node_end(&head, s2);
free(s2);
}
else
{
current = add_node_end(&head, NULL);
}
}
current = head;
free(path);
while (current->next != NULL)
{
i = stat(current->str, &sb);
if (i == 0)
{
s1 = strdup(current->str);
free_list(head);
return (s1);
}
current = current->next;
}
free_list(head);
return (NULL);
}

/**
 * execFunc - uses execve and fork
 * @path: true path of command
 * @argv: array of strings like argv
 * Return: 0 or -1
 */

int execFunc(char *path, char **argv)
{
int i;
pid_t pid; /*PID used in fork*/
int *status = NULL; /*used in wait function when forking*/

if (path != NULL)
{
pid = fork();
/*I am child*/
if (pid == 0)
{
i = execve(path, argv, NULL); /*execute argv[0] if it's a command*/
if (i == -1)
return (-1);
else
return (0);
}
/*I am parent*/
else
{
wait(status);
return (0);
}
}
else
return (-1);
}

/**
 * printError - prints "Error!"
 * Return: void
 */
int printError(int i)
{
return (i + 5);
}

/**
 * printEnviron - prints the environment using environ
 * Return: void
 */
void printEnviron(void)
{
int i;
for (i = 0; environ[i] != NULL; i++)
printf("%s\n", environ[i]);
}
