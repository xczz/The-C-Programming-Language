#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAXOP 100
#define NUMBER '0'

int getop(char []);
void push(double);
double pop(void);

int main()
{
    int type, i, var;
    double op2, v;
    char s[MAXOP];
    double variable[26];
    
    for(i = 0; i < 26; ++i)
        variable[i] = 0.0;
    while((type = getop(s)) != EOF)
    {
        switch (type)
        {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if(op2 != 0.0)
                    push(pop() / op2);
                else
                    printf("error: zero divisor\n");
                break;
            case '\n':
                v = pop();
                printf("\t%.8g\n", v);
                break;
            case '=':
                op2 = pop();
                if(var >= 'A' && var <= 'Z')
                    variable[var - 'A'] = pop();
                else
                {
                    printf("error: no variable name\n");
                    push(op2);
                }
                break;
            default:
                if(type >= 'A' && type <= 'Z')
                    push(variable[type - 'A']);
                else if(type == 'v')
                    push(v);
                else
                    printf("error: unknown command %s\n", s);
                break;
        }
        var = type;
    }
    return 0;
}
