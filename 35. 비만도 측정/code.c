#include <stdio.h>

int main() {
    double a, b, c, d;
    scanf("%lf %lf", &a, &b);
    
    c = (a - 100) * 0.9;
    d = (b - c) * 100 / c;
    
    if(d <= 10) {
        printf("정상");
    }else if(d >= 10 && d <= 20) {
        printf("과체중");
    }else if(d > 20) {
        printf("비만");
    }

    return 0;
}

 