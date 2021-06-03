#include <stdio.h>

int main(void) {
    int a;
    int count = 0;
    scanf("%d", &a);
    for(int i = 1; i <= a; ++i) {
        int c = i%10;
        if(c == 1) {
            ++count;
        }
    }
    printf("%d", count);
    count = 0;
    return 0;
    
}