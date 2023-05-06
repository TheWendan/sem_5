#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define STACK_SIZE 100
#define NUMBER '0'
static double stack[STACK_SIZE];
static int top = -1;

void push(double n)
{
    if (top + 1 < STACK_SIZE)
    {
        stack[++top] = n;
    }
    else
    {
        printf("error: stack is full\n");
        exit(111);
    }
}
double pop()
{
    if (top != -1) //
    {
        return stack[top--];
    }
    else
    {
        printf("error: stack is empty\n");
        exit(222);
    }
}

int getop(char s[])
{
    int i, c;
    while ((s[0] = c = getchar()) == ' ' || c == '\t') // заменили getch на getchar 
    s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c;
    i = 0;
    if (isdigit(c))
        while (isdigit(s[++i] = c = getchar())) // заменили getch на getchar
    if (c == '.')
        while (isdigit(s[++i] = c = getchar())) // заменили getch на getchar       
    s[i] = '\0';
    return NUMBER;
}