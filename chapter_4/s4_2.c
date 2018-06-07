#include<stdio.h>
#include<ctype.h>

double atof(char s[]);

int main()
{
    char s[20] = "  123.45e-6";

    printf("%.10f\n", atof(s));
    return 0;
}

double atof(char s[])
{

    double val, power, exp, result;
    int i, sign, sign_e;

    for(i = 0; isspace(s[i]); ++i)
       ;
    sign = (s[i] == '-') ? -1 : 1;
    if(s[i] == '+' || s[i] == '-')
        ++i;
    for(val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if(s[i] == '.')
        ++i;
    for(power = 1.0; isdigit(s[i]); i++)
    {
        val = 10 * val + (s[i] - '0');
        power *= 10.0;
    }
    if(s[i] == 'e' || s[i] == 'E')
        ++i;
    sign_e = (s[i] == '-') ? -1 : 1;
    if(s[i] == '+' || s[i] == '-')
        ++i;
    for(exp = 0.0; isdigit(s[i]); i++)
        exp = 10.0 * exp + (s[i] - '0');
    result = sign * val / power;
    if(sign_e == 1)
    {
        while(exp-- > 0.0)
            result *= 10.0;
    }
    else 
    {
        while(exp-- > 0.0)
            result /= 10.0;
    }
    return result;
}
