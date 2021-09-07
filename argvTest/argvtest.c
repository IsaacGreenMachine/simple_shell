#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
char **argvSetup(char *input)
{
char **argv;
int i;
argv = malloc(sizeof(char *) * 32); /*need to fix "32". */
printf("MALLOCED\n");
argv[0] = strtok(input, " \n"); /*fill argv[0] from input, set up strtok*/
printf("TOK1");
i = 1;/*setup for argv*/
while (1 != 0) /*filling rest of argv*/
{
argv[i] = strtok(NULL, " \n");
printf("argv%i: %s\n", i, argv[i]);
if (argv[i] == NULL)/*end of string, put NULL as last value of array*/
{
break;
}
i++;/*increment*/
}
return (argv);
}

int main()
{
int i;
char **argvTEST;
argvTEST = argvSetup("Testing 1 2 3 4");
for(i = 0; argvTEST[i] != NULL; i++)
{
printf("%s\n", argvTEST[i]);
}
printf("%s\n", argvTEST[i]);
}
