#include<stdio.h>

void itob(int n, char s[], int b);
void reverse(char s[]);

int main()
{
    int n = 16;
    char s[20];
    int b = 16;

    itob(n, s, b);
    printf("%d %s\n", n, s);
    return 0;
}

void itob(int n, char s[], int b)
{
    int i, j, sign;
    
    if((sign = n) < 0)
        n = -n;
    i = 0;
    do{
        j = n % b;
        s[i++] = (j <= 9) ? (j + '0') : (j + 'a' - 10);
    }while((n /= 10) > 0);
    if(sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[])
{
    int len, i, j;
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
