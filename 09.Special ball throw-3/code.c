#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    // and 부분에 괄호를 쳐서 먼저 계산이 되게 해야함.
    if ((a >= 50 && a <= 70) || a % 6 == 0) {
        printf("win");
    } else {
        printf("lose");
        
    }
    return 0;
}