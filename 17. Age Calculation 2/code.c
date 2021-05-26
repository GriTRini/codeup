#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    if(a <= 13) {
        printf("%d %d", 13-a, 3 );
    }else  {
        printf("%d %d", 113 - a, 1);
    }
    return 0;
}