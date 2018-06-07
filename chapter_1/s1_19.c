#include<stdio.h>
#define MAXLINE 100

int getline(char line[], int maxline);
void reverse(char s[]);

int main()
{
    int len;
    char line[MAXLINE];
    
    while((len = getline(line,MAXLINE)) > 0)
    {
        reverse(line);
        printf("%s",line);
    }
    return 0;
}

int getline(char s[],int lim)
{
    int c, i;
    for(i=0; i<lim-1&& (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if(c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
void reverse(char s[])
{
    int len, j, i;
    char tmp;

    for(len=0; s[len]!='\0'; ++len)
        ;
    if(len > 0 && (s[len-1] == '\n'))
        len--;
    for(i=0; i<len/2; ++i)
    {
        j = len-1-i;
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}
