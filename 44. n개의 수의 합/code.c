#include <stdio.h>

int main() {
    
    int a, b;
    int sum = 0;
    scanf("%d", &a);
    
    for(int i = 1; i <= a; ++i) {
        scanf("%d", &b );
        sum = sum + b;
        
    }
    printf("%d", sum);
}