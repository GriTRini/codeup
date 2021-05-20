# 큰수 - 작은수

## 문제 설명
정수 두개가 입력으로 들어오면 큰수 - 작은수의 값을 출력하시오.

## 입력
두 정수가 입력된다.

## 출력
큰수 - 작은 수의 값이 출력된다.

## 입력예시
5 7

## 출력예시
2

### 첫번째 코드
```c
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > b) {
        printf("%d - %d", a, b);
    } else if (a < b) {
        printf("%d - %d", b, a);
    } 
}
```
-뺀값을 출력해야 하는데 출력값에서 빼려고 함.

### 두번째 코드
```c
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > b) {
        printf("%d", a-b);
    } else if (a < b) {
        printf("%d", b-a);
    } 
}
```
-a와 b가 서로 같다는 것을 생각하지 못함

### 세번째 코드
```c
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a >= b) {
        printf("%d", a-b);
    } else if (a <= b) {
        printf("%d", b-a);
    } 
}
```
