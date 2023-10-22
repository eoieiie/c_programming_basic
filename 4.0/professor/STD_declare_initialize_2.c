#include <stdio.h>

int main(void)
{
    char c = 'A';
    int i = 7, j = 7;
    double x = 0.0, y = 2.3;

    ! c;                // 0
    ! (i - j);          // 1
    ! i - j;            // -7
    ! ! (x + y);        // 1 
    ! x * ! ! y;        // 1

}