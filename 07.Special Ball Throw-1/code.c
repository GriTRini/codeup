#include <stdio.h>

int main(void)
{
    double a;
    
    scanf("%f", &a);  // 정수가 아닌 실수임을 고려하지 못함
    if (a >= 50.0 && a <= 60.0) {
        printf("win");
    } else {
        printf("lose");
    }
}