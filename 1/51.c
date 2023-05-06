#include <stdio.h>


void scan(char x[])
{
    char c; short i = 0;
    while((c = getchar()) != '\n')
    {
        x[i] = c; 
        i++;
    }
}

int sequence(char s1[], char s2[])
{
    unsigned int flag = 0;
    for(int i = 0; s1[i] != '\0'; i++)
    {
        for(int j = 0; s2[j] != '\0'; j++)
        {
            if(s1[i] == s2[j])
            {  
                flag = 1;
                printf("fsdfs");
                return i;
            }
        }
    }
    if(flag == 0)
    {
        return -1;
    }
    
}