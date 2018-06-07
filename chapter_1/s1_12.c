#include<stdio.h>
#define IN 1
#define OUT 0
int main()
{
    int c,state = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == '\t')
        {
            if(state == IN)
            {
                state = OUT;
                printf("\n");
            }
        }
        else
        {
            state = IN;
            putchar(c);
        }
    }
    return 0;
}
