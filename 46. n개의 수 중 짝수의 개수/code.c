#include <stdio.h>

int main() {
    
    int a, b;
    int count = 0;
    scanf("%d", &a);
    
    for(int i = 1; i <= a; ++i) {
        scanf("%d", &b );
        if(b % 2 == 0) {
            for(int i = 0; i <= a; ++i) {
                
            }  ++count;
        }
    }
    
    printf("%d", count);
}