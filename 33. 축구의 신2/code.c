#include <stdio.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    int s = (((90 - a) / 0.5 ) + 9 ) / 10;
    

    if(s > (c - b) ) {
        printf("win");
    }else if(s  == (c - b)) {
        printf("same");
    }else if(s  < (c - b)) {
        printf("lose");
    }
    return 0;
}