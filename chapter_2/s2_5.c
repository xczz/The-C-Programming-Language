#include<stdio.h>

int any(char s1[], char s2[]);

int main()
{
    char s1[] = "hello world";
    char s2[] = "echo";
    char s3[] = "my";

    printf("%d %d\n",any(s1,s2), any(s1,s3));
    return 0;
}

int any(char s1[], char s2[])
{
    int i, j, state;
    
    state = 0;
    for(i = 0; s2[i] != '\0'; ++i)
    {
        for(j = 0; s1[j] != '\0' && s1[j] != s2[i]; ++j)
            ;
        if(s1[j] != '\0')
            return j;
    }
    return -1;
}
