#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if (a%7 == 0) { //if문에서 값이 똑같은지 확인하려면 =이 아니라 ==을 써야 한다.
        printf("multiple");
    } else {
        printf("not multiple");
    }
}

