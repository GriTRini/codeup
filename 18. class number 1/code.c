#include <stdio.h>

int main() {
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(c < 10) {
        printf("%d%d0%d\n", a,b,c);
    }else {
        printf("%d%d%d\n", a,b,c);
    }
    return 0;
}