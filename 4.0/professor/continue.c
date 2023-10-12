#include <stdio.h>

#define TOTAL 100

int main(void)
{
    int i, c;

    for (i = 0; i < TOTAL; ++i) 
    {
        c = getchar();
        if (c >= '0' && c <= '9') //문자인지 아닌지 확인하는 코드
            continue;
        /* process other characters */
        printf("Processing character: %c\n", c);
    }

    return 0;
}
