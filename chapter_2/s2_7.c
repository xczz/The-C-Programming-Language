#include<stdio.h>

unsigned invert(unsigned x, int p, int n);

int main()
{
    unsigned x = ~0;
    
    printf("%x\n",invert(x, 7, 7));
    return 0;
}

unsigned invert(unsigned x, int p, int n)
{
    unsigned mask = ~(~0 << n) << (p+1-n);
    return x ^ mask;
}
