#include<stdio.h>
#define MAXLINE 1000

int getline(char line[],int maxline);

int main()
{
    int len,curr;
    char line[MAXLINE];

    scanf("%d",&len);
    while((curr = getline(line,MAXLINE)) > 0)
        if(curr == len)
            printf("%s",line); 
    return 0;
}

int getline(char s[],int lim)
{
    int c,i;

    for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if(c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
