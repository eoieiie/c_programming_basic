#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i, n =10;
    int seed = time(NULL);
    srand(seed);
    for (i = 0; i < n; ++i)
    {
        printf("%12d\n", rand());

    }

    return 0;



