#include <stdio.h>

int main()
{
    int a = 5, b = 3;

    int result1 = ++a * (b-- - (a - b)); //가장 먼저 실행되는거 b--. ()우선순위는 함수호출의 괄호이다.
    int result2 = a * b++ - a * b; 
    // int result2 = -a - - ++b -b;

    printf("a : %d\n", a);
    printf("b : %d\n", b);
    printf("result1 : %d\n", result1);
    printf("result2 : %d\n", result2);

    return 0;

}

