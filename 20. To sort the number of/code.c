#include <stdio.h>

int main(void){
    
    int a[3] = {};
    
    for(int i = 0; i < 3; ++i) {
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < i; ++j) {
            if(a[i] <= a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    
    for(int i = 0; i < 3; ++i) {
        printf("%d ", a[i]);
    }
    return 0;
}
