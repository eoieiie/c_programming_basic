#include <stdio.h>

int main(void)
{
    int N;
    printf("input integer and press enter\n");
    printf("input N: ");
    scanf("%d", &N);

    if ( N == 0) //괄호 안에 N만 적어도 됨. 왜냐하면 0은 false니까!
    {
        printf("false\n");
    }
    else
    {
        printf("true\n");
    }

    return 0;
}


//조건 = true 냐 false 냐 . = 1이냐 아니면 0이냐 
