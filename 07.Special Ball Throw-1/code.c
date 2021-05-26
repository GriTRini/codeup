#include <stdio.h>

int main(void)
{
    int a;
    
    scanf("%d", &a);
    if (a >= 50 && a <= 60) {
        printf("win");
    } else {
        printf("lose");
    }
}