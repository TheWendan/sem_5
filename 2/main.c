#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "calc.h"
#define NUMBER '0'
#define MAXOP 100

int main()
{
    int type;
    double op2;
    char s[MAXOP];
    while ((type = getop(s)) != EOF)
    {
        switch (type)
        {
        case NUMBER:
            push(atof(s));
            break;
        case 'c': // cos
            push(cos(pop()));
            break;
        case 's': // sin
            push(sin(pop()));
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
            if (op2 != 0.0)
            {
                push(pop() / op2);
                break;
            }
            else
            {
                printf("error: zero divisor\n");
                return -1;
                break;
            }
        case '%':
            op2 = pop();
            if (op2 != 0.0)
            {
                push(trunc(pop() / op2)); // отбрасывание дробной части
                break;
            }
            else
            {
                printf("error: zero divisor\n");
                return -1;
                break;
            }
        case '^':
            push(pow(pop(), pop())); // число степень ^
            break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("error: unknown command %s\n", s);
            return -1;
        }
    }
    return 0;
}


