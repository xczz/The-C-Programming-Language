#include<stdio.h>

int main()
{
    int nspace, ntab, nline;
    int c;

    nspace = ntab = nline = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ')
            ++nspace;
        if(c == '\t')
            ++ntab;
        if(c == '\n')
            ++nline;
    }
    printf("nspace = %d\nntab = %d\nnline = %d\n",nspace, ntab, nline);
    return 0;
}
