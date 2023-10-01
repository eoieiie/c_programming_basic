#include <stdio.h>
/*13번문제*/

int main(void)
{
    int i = 0, power = 2048;

    for (power = 1024; power > 0; power /= 2)   /*for(; (power /= 2) > 0;) */  /* for(;power > 0; power /= 2)   */
    {
        printf("%-6d", power);
    }

    return 0;
}