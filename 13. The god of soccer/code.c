#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int s = (((90 - a) / 0.5) + 9 )/10;
    // 5분마다 골을 넣을 수 있지만 90분에는 종료가 되므로 넣지 못하는 것을 고려 해야한다.
    if (s >= 0) {
        printf("%d", s + b);
    }
    return 0;
}