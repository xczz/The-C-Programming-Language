#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define NUMBER '0'
#define NAME 'n'
int getch(void);
void ungetch(int);

int getop(char s[])
{
    int i, c;
    
    while((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    i = 0;
    if(islower(c))
    {
        while(islower(s[++i] = c = getch()))
            ;
        s[i] = '\0';
        if(c != EOF)
            ungetch(c);
        if(strlen(s) > 0)
            return NAME;
        else 
            return c;
    }
    if(!isdigit(c) && c != '.')
        return c;
    if(isdigit(c))
        while(isdigit(s[++i] = c = getch()))
            ;
    if(c == '.')
        while(isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if(c != EOF)
        ungetch(c);
    return NUMBER;
}
