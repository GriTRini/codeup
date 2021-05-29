#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a >= b) {
        printf("%d", a-b);
    } else if (a <= b) {  // a와 b가 서로 같다는 것을 생각하지 못함
        printf("%d", b-a);
    } 
}