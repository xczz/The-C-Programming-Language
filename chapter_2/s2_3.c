#include<stdio.h>

int htoi(char s[]);

int main()
{
    char s[] = {"0xff"};
    
    printf("%d\n",htoi(s));
    return 0;
}

int htoi(char s[])
{
    int i, n, symbol, digit;

    i = 0;
    n = 0;
    symbol = 1;
    if(s[i] == '0')
    {
        ++i;
        if(s[i] == 'x' || s[i] == 'X')
            ++i;
    }
    for(; symbol == 1; ++i)
    {
        if(s[i] >= '0' && s[i] <= '9')
            digit = s[i] - '0';
        else if(s[i] >= 'a' && s[i] <= 'f')
            digit = s[i] - 'a' + 10;
        else if(s[i] >= 'A' && s[i] <= 'F')
            digit = s[i] - 'A' + 10;
        else
            symbol = 0;
        if(symbol == 1)
            n = n * 16 + digit;
    }
    return n;
}
