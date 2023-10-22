// Describe the behavior of the following program:


#include <stdio.h>
#include <stdlib.h>

#define FOREVER 1
#define STOP 17

int main(void)
{
    void f(void);
    while(FOREVER)
        f();

    return 0;
}

void f(void)
{
    
    static int cnt = 0; //정적 지역 변수, 이 함수 안에서만 접근 가능해짐.
    printf("cnt = %d\n", ++cnt);
    if (cnt == STOP)
        exit(0);
}


