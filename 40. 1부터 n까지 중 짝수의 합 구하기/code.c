#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int i;
    int num = 0;
    for( i = 1; i <= a; ++i ) {
        if(i%2 == 0) {
            num = num + i;
        }
    }
    printf("%d", num);
    return 0;
}