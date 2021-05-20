# 터널 통과하기

## 문제 설명   

어떤 차의 높이가 170cm 이다.

이 차는 3개의 터널을 차례대로 지나게 될 것이다.

터널의 높이가 차의 높이보다 같거나 낮다면 차는 터널과 충돌하여 사고가 날 것이다.

터널의 높이가 차례대로 3개 주어지면 터널을 무사히 잘 통과하면 PASS 를 출력하고, 사고가 난다면 CRASH 를 출력하시오.

​

## 입력

터널의 높이가 차례대로 3개 주어진다. (실수)

​

## 출력

170보다 같거나 작으면 "CRASH"를 출력, 그 보다 크면 "PASS"를 출력하시오.

​

## 입력 예시   

170 168 175

​

## 출력 예시

CRASH

### 첫번째 코드
```c
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > 170 || b > 170 || c > 170) {
        printf("PASS");
    } else {
        printf("CRASH");
        
    }
    return 0;
}
``` 
- 터널의 높이가 주어진다. a, b, c 셋 모두다 통과를 해야 PASS인데 이 중 한대만 통과하여도 PASS가 나옴

### 두번째 코드
```c
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > 170 && b > 170 && c > 170) {
        printf("PASS");
    } else {
        printf("CRASH");
        
    }
    return 0;
}
```
