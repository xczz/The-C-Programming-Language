#include<stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main()
{
    unsigned x = 0;
    unsigned y = 0xf0;
    printf("%x\n",setbits(x, 8, 8, y));
    return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    unsigned tmp = (~(~0 << n) & y) << (p+1-n);
    unsigned mask = ~((~(~0<<n))<<(p+1-n));
    return (x & mask) | tmp;
}
