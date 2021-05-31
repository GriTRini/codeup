#include <stdio.h>

int main() {
    int num,n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
        ++num;
        printf("%d ", num);
    }
    
    return 0;
}