// On a 24-hour clock, the zero hour is midnight, and the 23rd hour is 11 o'clock at
// night, one hour before midnight. On such a clock, when 1 is added to 23, we do not
// get 24, but instead we get O. There is no 24. In a similar fashion, 22 plus 5 yields 3,
// because 22 plus 2 is 0 and 3 more is 3. This is an example of modular arithmetic, or
// more precisely, of arithmetic modulo 24.

// Most machines do modular arithmetic on
// all the integral types. This is most easily illustrated with the unsigned types. Run
// the following program and explain what gets printed: 

#include <limits.h> //for unit_max
#include <stdio.h>  

int main(void)
{
    int i;
    unsigned u = UINT_MAX; // unsigned int타입이 가질 수 있는 최대값을 나타낸다. u + i 를 하면 i가 0일 때 i가 출력되지만 그 위의 수가 될 경우 오버플로우가 발생하고, 결과값은 0부터 시작하게 된다. 

    for (i = 0; i < 10; ++i)
        printf("%u + %d = %u\n", u, i, u + i);
    for (i = 0; i < 10; ++i)
        printf("%u * %d = %u\n", u, i, u * i);

    return 0;
}

//이 프로그램은 컴퓨터에서 사용하는 정수형 데이터 타입의 범위와 그 범위를 넘어설 때 일어나는 현상을 보여주기 위한 것.

