#include<stdio.h>
#define ALPHABET_SIZE 26

int main()
{
    int c;
    int count[ALPHABET_SIZE] = {0};
    int i, j;
    
    while((c = getchar()) != EOF)
    {
        if(c >= 'a' && c <= 'z')
            ++count[c-'a'];
        else if(c >= 'A' && c <= 'Z')
            ++count[c-'A'];
    }
    
    for(i=0; i<ALPHABET_SIZE; ++i)
    {
        printf("%c ",'a'+i);
        for(j=0; j<count[i]; ++j)
            printf("=");
        printf("\n");
    }
    return 0;
}
