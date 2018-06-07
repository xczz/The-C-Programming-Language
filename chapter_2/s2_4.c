#include<stdio.h>

void squeeze(char s1[], char s2[]);

int main()
{
    char s1[] = "hello world, my fiend";
    char s2[] = "hi, hello and goodbye";
    
    squeeze(s1,s2);
    printf("%s\n",s1);
    return 0;
}

void squeeze(char s1[], char s2[])
{
    int i, j, symbol, k;

    symbol = k = 0;
    for(i = 0; s1[i] != '\0'; ++i)
    {
        for(j = 0; s2[j] != '\0'; ++j)
        {
            if(s1[i] == s2[j])
                symbol = 1;
        }
        if(symbol == 0)
            s1[k++] = s1[i];
        symbol = 0;
    }
    s1[k] = '\0';
}
