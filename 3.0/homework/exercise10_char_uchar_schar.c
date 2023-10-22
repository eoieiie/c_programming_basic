#include <stdio.h>

int main(void)
{
    char c = -1;
    signed char s = -1;
    unsigned char u = -1;

    printf("c = %d s = %d u = %d\n", c, s, u);

    return 0;
}

//signed char = 부호 있는 정수를 나타낸다. 
//unsigned char = 부호 없는 정수를 나타낸다. 

//그래서 c,s는 -1을 출력하지만 u는 255를 출력. 부호 없이 해석되야 하기 때문에..

