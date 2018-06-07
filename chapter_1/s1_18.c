#include<stdio.h>
#define MAXLINE 100

int getline(char line[],int lim);

int main()
{
    int len;
    char line[MAXLINE];

    while((len = getline(line,MAXLINE))>0)
    {
        len = len - 2;
        if(len >= 0 && line[len] == '\n')
            len--;
        while(len >=0 && (line[len] == ' ' || line[len] == '\t'))
            len--;
        if(len >= 0)
        {
            line[len+1] = '\n';
            line[len+2] = '\0';
            printf("%s",line);
        }
    }
}

int getline(char line[],int lim)
{
    int i, c;

    for(i=0; i<lim-1 && (c = getchar())!=EOF && c != '\n'; ++i)
        line[i] = c;
    if(c == '\n')
    {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}
