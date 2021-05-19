# 특별한공 던지기-1
## 문제 설명     

슬기는 체육 선생님과 공던지기로 아이스크림 내기를 하게 됐다.

공을 던져서 50m ~ 60m 사이에 공이 들어가면 슬기가 이기게 되고, 그 외에 공이 떨어지면 체육선생님이 이기게 룰을 정했다.

슬기가 던진 공의 위치가 입력으로 주어지면 50이상 60이하이면 "win"을 출력하고, 그 외에는 "lose"를 출력하시오.

​

## 입력

슬기가 던진 공의 위치가 입력으로 주어진다.(실수)

​

## 출력

50이상 60이하이면 win을 출력, 그 외에는 lose를 출력하시오.

​

## 입력 예시   

50.213

​

## 출력 예시

win

### 첫번째 코드
```c
#include <stdio.h>

int main(void)
{
    int a;
    
    scanf("%d", &a);
    if (a >= 50 && a <= 60) {
        printf("win");
    } else {
        printf("lose");
    }
}
```
-정수가 아닌 실수임을 고려하지 못함

### 두번재 코드
```c
#include <stdio.h>

int main(void)
{
    double a;
    
    scanf("%f", &a);
    if (a >= 50.0 && a <= 60.0) {
        printf("win");
    } else {
        printf("lose");
    }
}
```
-정수가 아닌 실수이므로 double형으로 받기 위함

### 세번째 코드
```c
#include <stdio.h>

int main(void)
{
    double a;
    
    scanf("%f", &a);
    if ((a >= 50.0)&& ( a <= 60.0))
        {
        printf("win");
        }
    else if ((a < 50.0)|| ( a > 60.0))
        {
        printf("lose");
        }
}
```

- double을 받을때 if라고 적지 않음

### 네번째 코드
```c
#include <stdio.h>

int main(void)
{
    double a;
    
    scanf("%lf", &a);
    if ((a >= 50)&& ( a <= 60))
        {
        printf("win");
        }
    else 
        {
        printf("lose");
        }
}
```
