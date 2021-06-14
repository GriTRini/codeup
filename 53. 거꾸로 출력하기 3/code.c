#include <stdio.h>

int main() {
    int i, n;
    int nums[1000] = { };
    scanf("%d", &n);
    for(i = 0; i <= n; ++i) {
        scanf("%d", &nums[i]);
    }
    
    for(i = n-1; i >= 0; --i) {
        printf("%d ", nums[i]);
    }
    return 0;
}
