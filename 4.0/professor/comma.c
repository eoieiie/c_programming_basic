// for (sum = 0, i = 1; i <= n; ++i)
//     sum += i;
// for (sum = 0, i = 1; i <= n; sum += i, ++i) /* correct */
//     ;
// for (sum = 0, i = 1; i <= n; ++i, sum += i)/* wrong */
//     ;

#include <stdio.h>

int main(void)
{
    // Declarations and initializations 
    int i, j, k = 3;
    double x = 3.3;
    // Expression

    i = 1, j = 2, ++ k + 1;   //((i = 1), (j = 2)), ((++ k) + 1)    5
    k != 1, ++ x * 2.0 + 1;   //(k != 1), (((++ x) * 2.0) + 1)      9.6

    return 0;

}
