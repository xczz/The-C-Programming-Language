#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

#define NUMBER '0'
#define MAXLINE 100

int li = 0;
char line[MAXLINE];

int getline(char s[], int lim);

int getop(char s[])
{
    int i, c;
    
    if(line[li] == '\0')
        if(getline(line, MAXLINE) == 0)
            return EOF;
        else
            li = 0;
    while((s[0] = c = line[li++]) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if(!isdigit(c) && c != '.')
        return c;
    i = 0;
    if(isdigit(c))
        while(isdigit(s[++i] = c = line[li++]))
            ;
    if(c == '.')
        while(isdigit(s[++i] = c = line[li++]))
            ;
    s[i] = '\0';
    if(c != EOF)
        --li;
    return NUMBER;
}

int getline(char s[], int lim)
{
    int c, i;

    for(i = 0; i<lim-1 && (c = getchar())!=EOF && c != '\n'; ++i)
        s[i] = c;
    if(c == '\n')
        s[i++] = '\n';
    s[i] = '\0';
    return i;
}
