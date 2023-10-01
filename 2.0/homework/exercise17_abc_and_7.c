#include <stdio.h>

int main(void)
{
    int a = 1, b = 2, c = 3;

    a += b += c += 7;

    printf("%d,%d,%d",a, b, c);

    return 0;
}

// 13, 12, 10