#include <stdio.h>

int main() {
    int c,symbol=0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ' && symbol == 0)
        {
            putchar(c);
            symbol = 1;
            continue;
        }
        if(c == ' ' && symbol == 1)
            continue;
        symbol = 0;
        putchar(c);
    }
}
