#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int s = (90-a)/5;
    
    if(s >= 0) {
        printf("%d", s + b + 1);
    }
    
    return 0;
}