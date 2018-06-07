#include<stdio.h>

int strrindex(char s[], char t[]);

int main()
{
    char s[30] = "hello my friend,my dear";
    char t[10] = "my";    

    printf("%d\n", strrindex(s, t));
    return 0;
}

int strrindex(char s[], char t[])
{
    int len, i, j, k;
    
    for(len = 0; s[len] != '\0'; len++)
        ;
    for(i = --len; i >= 0; --i)
    {
        for(j=i, k=0; t[k] != '\0' && s[j] == t[k]; ++j, ++k)
            ;
        if(k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}
