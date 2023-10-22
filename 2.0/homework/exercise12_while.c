#include <stdio.h>
/*12번문제*/

int main(void)
{
    int i = 0, power = 2048;

    while ((power /= 2) > 0) //while 루프가 실행되기 전 power /=2 실행
    printf("%-6d", power);
        

    return 0;
}