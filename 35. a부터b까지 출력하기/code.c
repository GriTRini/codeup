#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    if (a <= b) {
        for(int i = a; i < b+1; ++i) {
        printf("%d ", a);
            ++a;
         }
    } else if(a >= b) {
        for(int i = b; i < a+1; ++i) {
        printf("%d ", b);
            ++b;
        
    }
    }
    
        
    return 0;
}