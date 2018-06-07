int i = 0;
int state = 1;
while(state != 0)
{
    if(i >= lim-1)
        state = 0;
    else if((c = getchar()) == '\n')
        state = 0;
    else if(c == EOF)
        state = 0;
    else
        {
            s[i] = c;
            ++i;
        }
}
