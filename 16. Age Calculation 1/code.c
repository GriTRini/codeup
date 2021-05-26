#include <stdio.h>
int main (void) 
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    if( b == 3 || b == 4) {
        printf("%d", 13 - (a / 10000));
    }else if( b ==1 || b == 2) {
        printf("%d", 113 - (a / 10000));
    }
    
    return 0;
}
        
