#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int i;
    int num = 0;
    for( i = a; i <= b; ++i ) {
        if(i%3 == 0) {
            num = num + i;
        }
    }
    printf("%d", num);
    return 0;
}