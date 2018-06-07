#include<stdio.h>

void escape(char s[], char t[]);
void escape_r(char s[], char t[]);

int main()
{
    char s[20], t[20] = "hello\nworld";
    
    escape_r(s,t);
    printf("%s\n", s);
    escape(s,t);
    printf("%s\n", s);
}

void escape(char s[], char t[])
{
    int i, j;
    
    for(i = j = 0; t[i] != '\0'; ++i)
    {
        switch(t[i])
        {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            default:
                s[j++] = t[i];
                break;
        }
    }
    s[j] = '\0';
}

void escape_r(char s[], char t[])
{
    int i, j;
    
    for(i = j = 0; t[i] != '\0'; ++i)
    {
        if(t[i] == '\\')
        {
            switch(t[++i])
            {
                case 'n':
                    s[j++] = '\n';
                    break;
                case 't':
                    s[j++] = '\t';
                    break;
                default:
                    s[j++] = '\\';
                    s[j++] = t[i];
                    break;
            }
        }
        else
            s[j++] = t[i];
    }
    s[j] = '\0';
}
