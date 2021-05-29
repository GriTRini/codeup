#include <stdio.h>

int main(void) 
{
    int a;
    scanf("%d", &a);
    
    if(a %10 == 1 && a != 11) {
        printf("%dst", a);
    }else if(a % 10 == 2 && a != 12) {
        printf("%dnd", a);
    }else if(a % 10 == 3 && a != 13) {
        printf("%drd", a);
    }else if(a == 11 || a == 12 || a == 13) {
        printf("%dth", a);
    }else {
        printf("%dth", a);
    }
    
    return 0;
}