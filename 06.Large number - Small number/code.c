#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > b) {
        printf("%d", a-b); // 뺀값을 출력해야 하는데 출력값에서 빼려고 함.
    } else if (a < b) {
        printf("%d", b-a);
    } 
}