#include <stdio.h>

int main(void)
{
    double a;
    
    scanf("%lf", &a); // double을 받을때 if라고 적지 않음
    if ((a >= 50)&& ( a <= 60)){
        printf("win");
    } else {
        printf("lose");
    }
}