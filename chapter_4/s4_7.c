#include<string.h>

void ungetch(int);

void ungets(char s[])
{
    int len = strlen(s);

    while(len > 0)
        ungetch(s[--len]);
}
