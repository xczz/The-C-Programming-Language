#include<stdio.h>

#define MAXCOL 10
#define TABINC 8

char line[MAXCOL];

int exptab(int pos);
void printl(int pos);

int main()
{
}

int exptab(int pos)
{
    line[pos] = ' ';
    for(++pos; pos < MAXCOL && pos % TABINC != 0; ++pos)
        line[pos] = ' ';
    if(pos < MAXCOL)
        return pos;
    else
        printl(pos);
}
void printl(int pos)
{
    int i;
    
    for(i = 0; i < pos; ++i)
        putchar(line[i]);
    if(pos > 0)
        putchar('\n');
}
