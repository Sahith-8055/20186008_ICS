#include <stdio.h>
#include <ctype.h>

#define MAXLINE 100

int power(int base, int exp) {
    int product = 1;
    while(exp-- > 0) {
        product = product * base;
    }
    return product;
}

int getline(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        /* code */
        s[i] = c;
    }
    if (c == '\n')
    {
        /* code */
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}


double atof(char s[]) {
    double val, pow;
    int sign, i, esign, exp;
    int power(int base, int exp);
    for (i = 0; isspace(s[i]); i++)
    {
        /* code */
        ;
    }
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
    {
        /* code */
        i++;
    }
    for (val = 0.0; isdigit(s[i]); i++)
    {
        /* code */
        val = 10.0 * val + (s[i] - '0');
    }
    if (s[i] == '.')
    {
        /* code */
        i++;
    }
    for (pow = 1.0; isdigit(s[i]); i++)
    {
        /* code */
        val = 10.0 * val + (s[i] - '0');
        pow = pow * 10.0;
    }
    if (s[i] == 'E' || s[i] == 'e')
    {
        /* code */
        i++;
    }
    if (s[i] == '+' || s[i] == '-')
    {
        /* code */
        esign = s[i];
        i++;
    }
    for (exp = 0; isdigit(s[i]); i++)
    {
        /* code */
        exp = 10.0 * exp + (s[i] - '0');
    }
    if (esign == '-')
    {
        /* code */
        return sign * (val / pow) / power(10, exp);
    }
    else
    {
        return sign * (val / pow) / power(10, exp);
    }

}

int main(int argc, char const *argv[])
{
    /* code */
    char str[MAXLINE];
    getline(str, MAXLINE);
    double num = atof(str);
    printf("%f\n", num);
    return 0;
}