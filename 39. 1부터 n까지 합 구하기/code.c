#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int i;
    int num = 0;
    for( i = 1; i <= a; ++i ) {
        num = num + i;
    }
    printf("%d", num);
    return 0;
}