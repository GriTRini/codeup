#include <stdio.h>

int main(void) {
    int num[10];
    for(int i = 0; i < 10; ++i) {
         scanf("%d", &num[i]);
    }
    
    for(int i = 0; i < 10; ++i) {
        if(num[i] % 5 == 0) {
            printf("%d", num[i]);
            break;
        } else if (i == 9) {
            printf("0");
        }
    }   
    return 0;
}