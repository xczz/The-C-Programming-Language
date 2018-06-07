#include<stdio.h>

void strcat(char s[], char t[]);

int main()
{
    char s[20] = "hello";
    char t[] = "world";
    
    strcat(s, t);
    printf("%s\n", s);
    return 0;
}

void strcat(char s[], char t[])
{
    while(*s)
        s++;
    while(*s++ = *t++)
        ;
}
