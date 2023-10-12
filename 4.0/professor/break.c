// break 과 continue 는 정상적인 제어의 흐름을 중단시킴.



#include <stdio.h>
#include <math.h>

int main(void)
{
    //제곱근을 반환하는 break 문
    double x;


    while(1)
    {
        scanf("%lf", &x);
        if( x < 0.0)
            break; //x가 음수일 경우 break
        printf("%f\n", sqrt(x));

    }
    //break 문은 여기로 점프한다. 
    return 0;

}