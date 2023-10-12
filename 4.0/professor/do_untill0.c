#include <stdio.h>

//0이 입력되기 전까지 정수를 입력하는 프로그램
int main(void)
{
    int sum = 0, i = 0;

    do
    {
        sum += i;
        scanf("%d", &i);

    } while (i > 0);

    printf("입력하신 정수의 합은 %d입니다",sum);

    return 0;
}


