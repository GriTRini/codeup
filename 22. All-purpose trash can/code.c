#include <stdio.h>

int main(void){
    
    int a, b, c;
    
    scanf("%01d %01d", &a, &b);
    
    c = ((b*10)+a)*2;
    
    if (c >= 100) {
        printf("%d\n", c - 100);
        
        if(c - 100 <= 50 ) {
        printf("GOOD");
    }else if(c -100 > 50) {
        printf("OH MY GOD");
    }    
        
    }else {
        printf("%d\n", c);
        
        if(c <= 50 ) {
        printf("GOOD");
    }else if(c > 50) {
        printf("OH MY GOD");
    }
        
    }
    
    
    return 0;
}
