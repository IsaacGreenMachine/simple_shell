#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
char **argvSetup(char *input);
char *pathChecker(char *command);
char *getPath();
char *which(char *path, char *commandName);
list_t *add_node_end(list_t **head, const char *str);
int execFunc(char *path, char **argv);
size_t print_list(const list_t *h);
int printError(int i);
void printEnviron(void);
void freeAndExit(char **argv, int i);
void free_list(list_t *head);
char *_strcat(char *dest, char *src);
extern char **environ;
#endif
