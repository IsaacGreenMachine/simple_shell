#include "holberton.h"
/*
 *TODO:
 * error message if executable not recognized
 * set up failure conditions (if == -1)
 *implement isatty to check source: isatty(fileno())? isatty(STDIN_FILENO)
 *    isatty (checks if input is coming from mouse & keyboard);
 *    check if isatty works: echo ls | ./superSimpleShell
 *Fix how to get size of argv
 *if Betty problems, might want to check about using functions like
 *     stringcmp, strlen, etc..
 *fix double error printing when exiting
 * Make this work without printing shellname: echo ls | ./shell
 * ------------------------------
 * use perror for error handling
 * check file accessability using "access" system call
 */

/*
 * To compile:
 * gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o isaacShell
 */

/**
 * main - main function for shell
 * Return: 0
 */
int main(void)
{
size_t len; /*getline buffer size*/
char *line = NULL, **argv, *pathCheck; /*what getline writes to*/
ssize_t getNum; /*used to check EOF from getline*/
int i, j;

while (1 != 0)/*shell starts running*/
{
j = write(STDOUT_FILENO, "#shellYeah!$ ", 13); /*write shell name*/
if (j == -1)
printf("ERROR!(5)");
getNum = getline(&line, &len, stdin); /*take input from user*/




//////VVV///////////////?
if (getNum == EOF) /*checks end of file condition*/
{
j = write(STDOUT_FILENO, "\n", 1);
if (j == -1)
printf("ERROR!(5)");
/*check if getline == -1*/
break;
}
if (getNum == -1)
printf("Error!(1)\n");


argv = argvSetup(line); /*sets up argv*/
if (strcmp(argv[0], "exit") == 0) /*exit command*/
{
if (argv[1] == NULL || strcmp(argv[1], "0") == 0)
freeAndExit(argv, 0);
else
{
i = atoi(argv[1]);
if (i == 0)
{
printf("Error!(2)");
}
else
freeAndExit(argv, i);
}
}
if (strcmp(argv[0], "env") == 0) /*env command*/
printEnviron();
/*need handling for arg1 not being blank*/

pathCheck = pathChecker(argv[0]);
printf("PathChecked: %s\n", pathCheck);
/*
 * if (pathCheck == NULL)
printf("Error!(3)\n");
*
*/
i = execFunc(pathCheck, argv); /*uses execve on path argv[0].*/
/*
 * if (i == -1)
{
printf("Error!(4)");
}
*
*/
printf("freeArgv:\n");
freeArgv(argv);
printf("free:\n");
free(pathCheck);
free(argv);
}
return (0);
}
