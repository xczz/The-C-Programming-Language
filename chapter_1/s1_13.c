#include<stdio.h>
#define MAX_LEN 10
#define IN 1
#define OUT 0

int main()
{
    int len = 0, c;
    int count[MAX_LEN] = {0};
    int state = OUT;
    int i, j;

    while((c = getchar()) != EOF)
    {
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            if(state == IN)
                ++len;
            else
            {
                state = IN;
                len = 1;
            }
        }
        else
        {
            state = OUT;
            if(len <= 10)
                ++count[len-1];
            else
                ++count[MAX_LEN-1];
        }
    }

    for(i=1; i<=MAX_LEN; ++i)
    {
        printf("%d",i);
        for(j=0; j<count[i-1]; j++)
            printf("=");
        printf("\n");
    }

    for(i=MAX_LEN; i>=1; --i)
    {
        for(j=1; j<=MAX_LEN; ++j)
        {
            if(count[j-1] == i)
            {
                printf("  |");
                count[j-1]--;
            }
            else
                printf("   ");
        }
        printf("\n");
    }
    for(i=1; i<=10; ++i)
        printf("%3d",i);
    return 0;
}
