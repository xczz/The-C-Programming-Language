#include<stdio.h>

unsigned rightrot(unsigned x, int n);
int wordlength(void);

int main()
{
    unsigned x = 0xff;

    printf("%x\n",rightrot(x, 8));
    return 0;
}

unsigned rightrot(unsigned x, int n)
{
    int length = wordlength();
    unsigned mask = ~(~0 << n);
    unsigned tmp = (mask & x) << (length - n);
    return tmp | (x >> n);
}

int wordlength(void)
{
    unsigned v = (unsigned)~0;
    int i;

    for(i = 1; (v = v >> 1) > 0; ++i)
        ;
    return i;
}
