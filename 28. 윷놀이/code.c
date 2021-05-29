#include <stdio.h>

int main() {
    int a[4] = {0};
    int count = 0;
    for(int i = 0; i < 4; ++i) {
        scanf("%d", &a[i]);
        if(a[i] == 1) {
            ++count;
        }
    }
    if(count == 0) {
        printf("모");
    }else if(count == 1) {
        printf("도");
    }else if(count == 2) {
        printf("개");
    }else if(count == 3) {
        printf("걸");
    }else if(count == 4) {
        printf("윷");
    }
    return 0;
}