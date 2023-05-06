#include <stdio.h>
#include "51.h"
#define LEN 30

int main()
{
    char s1[LEN] = {'0'}; char s2[LEN] = {'0'};
    
    printf("Enter s1: ");
    scan(s1);
    printf("Enter s2: ");
    scan(s2);
    printf("%d", sequence(s1, s2));
    return 0;
}