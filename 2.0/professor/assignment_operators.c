#include <stdio.h>

int main(void)
{
    int i = 1, j = 2, k = 3, m = 4;

    i += j + k; // 6
    i += (j + k); // 6
    i = (i + (j + k)); // 6

    printf("%d\n",i);

    j *= k = m + 5; // 18
    j *= (k = (m + 5)); // 18
    j = (j * (k = (m + 5)));// 18

    printf("%d\n", j);


    return 0;
}