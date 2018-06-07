#include<stdio.h>
#include<string.h>

void strncpy(char s[], char t[], int n);
void strncat(char s[], char t[], int n);
int strncmp(char s[], char t[], int n);

int main()
{
    char s[20] = "hello";
    char t[] = "world";
    
    strncpy(s, t, strlen(t));
    printf("%s\n", s);
    return 0;
}

void strncpy(char s[], char t[], int n)
{
    while(*t && n-- > 0)
    {
        *s++ = *t++;
    }
    while(n-- > 0)
        *s++ = '\0';
}
