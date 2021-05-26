#include <stdio.h>
int main (void) 
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    int c = 113 - (a / 10000);
    
    printf("%d", c);
    
    
    return 0;
}