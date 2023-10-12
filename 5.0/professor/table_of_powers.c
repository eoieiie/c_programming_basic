#include <stdio.h>
#define N 7

long power(int, int);
void prn_heading(void);
void prn_tbl_of_powers(int);






int main(void) //main 함수
{
    prn_heading();
    prn_tbl_of_powers(N);
    
    return 0;
}





void prn_heading(void) //제목을 작성하는 함수. 
{
    printf("\n::::: A table of powers :::::\n\n");
}

void prn_tbl_of_powers(int n) 
{
    int i, j;
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n; ++j)
        {
            if(j == 1)
                printf("%ld", power(i, j)); //첫번째 숫자는 왼쪽에 붙이고 
            else
                printf("%9ld", power(i, j)); //그 다음 숫자들은 9칸 안에다가 채우기. 
        }
        putchar('\n'); //아니면 printf("\n")해도 된다!
    }
}

long power(int m, int n)
{
    int i;
    long product = 1;
    for (i = 1; i <= n; ++i)
        product *= m;
    
    return product;
}


// %5d: 정수를 받아 최소한 5칸의 폭을 가진 10진수로 출력합니다.
// %-5d: 정수를 받아 최소한 5칸의 폭을 가지며 왼쪽 정렬된 10진수로 출력합니다.
// %08d: 정수를 받아 최소한 8칸의 폭을 가지며, 빈 공간이 있다면 '0'으로 채운 상태에서 오른쪽 정렬된 숫자로 출력합니다.
// %.2f: 부동 소수점 수를 받아 소숫점 아래 두 자리까지만 표현하여 출력합니다.