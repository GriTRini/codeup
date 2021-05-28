#include <stdio.h>

int main(void) 
{
    int a;
    scanf("%d", &a);
    
    if(a <= 10) {
        printf("정상");
    }else if(a <= 20) {
        printf("과체중");
    }else if(a > 20) {
        printf("비만");
    }
    
    return 0;
}