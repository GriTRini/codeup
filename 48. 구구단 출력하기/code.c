#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == b){
    for(int i = a; i <= a; ++i) {
        for(int j = 1; j < 10; ++j) {
            printf("%d*%d=%d\n", i, j, i*j);
        }
    }    
    
    }
    
    if( a != b) {
    
    for(int i = a; i <=b; ++i) {
        for(int j = 1; j < 10; ++j) {
            printf("%d*%d=%d\n", i, j, i*j);
        }
    }
    }
    return 0;   
}