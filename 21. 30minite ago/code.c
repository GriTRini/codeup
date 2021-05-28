#include <stdio.h>

int main(void){
    
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    if(b-30 < 0) {
        if(a -1 < 0) {
            printf("%d %d", 23 - a, b + 30);
        } else {
            printf("%d %d", a-1, b +30);
        }
    }else {
        printf("%d %d", a, b-30);
    }
    return 0;
}
