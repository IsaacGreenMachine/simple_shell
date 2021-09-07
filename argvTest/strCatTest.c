#include <stdio.h>
#include <stdlib.h>
/**
 * _strcat - concatenates two strings
 * @dest: final destination of catted strings
 * @src: string to be catted to dest
 *
 * Return: pointer to start of catted strings
 */
char *_strcat(char *dest, char *src)
{
printf("pre i\n");
char *i = dest;
printf("pre j\n");
char *j = src;
printf("post j\n");
while (*i != 0)
{
printf("%c\n", *i);
i++;
}
while (*j != 0)
{
printf("%c\n", *i);
*i = *j;
i++;
j++;
}
*i = 0;
return (dest);
}

int main()
{
char s1[50] = "test";
char s2[] = "1234";
char *s3 = "gotIt";
printf("s1:%s s2:%s s3:%s\n", s1,s2 ,s3);
char *s4;
printf("preStringCat\n");
s4 = _strcat(s1, s2);
printf("postStringCat\n");
printf("preStringCat\n");
s4 = _strcat(s1, s3);
printf("postStringCat\n");
printf("s1: %s\n", s3);
}
