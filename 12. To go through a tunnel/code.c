#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // 터널의 높이가 주어진다. a, b, c 셋 모두다 통과를 해야 PASS인데 이 중 한대만 통과하여도 PASS가 나옴
    if (a > 170 && b > 170 && c > 170) {
        printf("PASS");
    } else {
        printf("CRASH");
        
    }
    return 0;
}