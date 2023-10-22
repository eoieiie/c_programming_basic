#include <stdio.h>

int main(void)
{
    int a, b, c = 0;

    a = ++c; // c = c + 1먼저 계산 후 a = c 연산. a = 1, c = 1, b = 0
    b = c++; // b = c 먼저 계산 후 c = c + 1 연산. a = 1, c = 2, b = 1

    printf("%d, %d, %d\n", a, b, ++c); 
    // printf("%d, %d, %d\n", a, b, c++); 
    // printf("%d\n", c);
    // 위 예시처럼 만약 ++c가 아니라 c++였다면
    // 1, 1, 2 가 출력되고 c는 3으로 저장됨. 
    
    return 0;
}

