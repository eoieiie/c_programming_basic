#include <stdio.h>

int main(void)
{
    int a = 1, b = 2, c = 3, d = 4;
    double x = 1.6;

    printf("%d\n", !a);
    printf("%d\n", !(x + 7.7));
    printf("%d\n", !(a < b || c < d));



    return 0;
}

//논리학에서는 !!a = a이지만, 
//c에서는 식이 zero면 부정인 정수값1, 
//nonzero 라면 그것의 부정인 정수값 0을 반환. 