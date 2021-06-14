#include <stdio.h>

int main() {
    int count1 = 0;
    int count2 = 0;
    char a[100000] = {0, };
    scanf("%s", a);
    
    for(int i = 0; i < 100000; ++i) {
        if(a[i] == '(') {
            ++count1;
        }else if(a[i] == ')') {
            ++count2;
        }
    }
    printf("%d %d", count1, count2);
    
    
    return 0;
}