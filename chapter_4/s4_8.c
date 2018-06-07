#include<stdio.h>

char buf;
int state = 0;     /*0 -> unused  1 -> used */

int getch(void)
{
    int c;

    if(state)
        c = buf;
    else
        c = getchar();
    state = 0;
    return c;
}

void ungetch(int c)
{
    if(state)
        printf("ungetch: too many characters\n");
    else
        buf = c;
}
