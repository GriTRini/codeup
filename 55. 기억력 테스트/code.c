#include <stdio.h>

int main() {
    int n;
    int a[11] = {};
    for(int i = 1; i <= 10; ++i) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n);
    
    printf("%d", a[n]);
    
    return 0;
}