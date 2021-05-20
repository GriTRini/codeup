# 7의 배수
## 문제 설명   

인학이는 숫자 7을 좋아한다.

어떤 정수가 입력되면 그 수가 7의 배수인지 확인하시오.

​
## 입력

자연수가 입력된다.

​
## 출력

7의 배수일 경우 multiple를 출력하고, 7의 배수가 아니면 not multiple을 출력하시오.

​
## 입력 예시   

9

​
## 출력 예시

not multiple

### 첫번째 코드
```c
#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if (a%7 = 0) {
        printf("multiple");
    } else {
        printf("not multiple");
    }
}
```
-if문에서 값이 똑같은지 확인하려면 =이 아니라 ==을 써야 한다.

### 두번째 코드
```c
#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if (a%7 == 0) {
        printf("multiple");
    } else {
        printf("not multiple");
    }
}
```
