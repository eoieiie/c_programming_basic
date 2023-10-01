/* some powers of 2 are printed */
/*11번문제*/

#include <stdio.h>

int main(void)
{
    int i = 0, power = 1;

    while(i++ <= 10) // 변수를 사용한 후 값을 증가(조건 검사 <=10 한 다음 i를 증가시킴)
    printf("%-6d", power *= 2);
    printf("\n");

    return 0;
}

/* 
++i
1이네**
2이네
3이네
.
.
.
10이네

i++
0이네 **
1이네
2이네
.
.
.
10이네
 */