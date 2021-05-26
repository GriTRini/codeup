#include <stdio.h>

int main() {
    double a;
    scanf("%lf", &a);
    
    if (a >= 50 && a <= 70 || a % 6 == 0) {
        printf("win");
    } else {
        printf("lose");
        
    }
    return 0;
}