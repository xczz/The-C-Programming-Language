#include<stdio.h>

void itoa(int n, char s[], int m);
void reverse(char s[]);

int main()
{
    int n;
    char s[20];

    n =  155;
    itoa(n, s, 10);
    printf("%s\n", s);
    return 0;
}

void itoa(int n, char s[], int m)
{
    int i, sign;

    if((sign = n) < 0)
        n = -n;
    i = 0;
    do{
        s[i++] = n % 10 + '0';
    }while((n /= 10) > 0);
    if(sign < 0)
        s[i++] = '-';
    while(i < m)
        s[i++] = ' ';
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[])
{
    int i, j, len;
    char tmp;

    for(len = 0; s[len] != '\0'; ++len)
        ;
    if(len > 0 && s[len-1] == '\n')
        --len;
    for(i = 0; i < len / 2; ++i)
    {
        j = len - 1 - i;
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}
