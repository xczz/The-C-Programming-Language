#include<stdio.h>
#include<stdlib.h>

void itoa(int n, char s[]);
void reverse(char s[]);

int main()
{
    int n =  ~(~0u << 1 >> 1);
    char s[100];

    itoa(n, s);
    printf("%d %s\n", n, s);
    return 0;
}

void itoa(int n, char s[])
{
    int i, sign;

    sign = n;
    i = 0;
    do{
        s[i++] = abs(n % 10) + '0';
    }while((n /= 10) != 0);
    if(sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[])
{
    int len, j, i;
    char tmp;

    for(len = 0; s[len] != '\0'; ++len)
        ;
    if(len > 0 && s[len-1] == '\n')
        len--;
    for(i = 0; i < len / 2; ++i)
    {
        j = len - 1 - i;
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}
