// Write a program that reads in an integer value for n and then sums the integers
// from n to 2 * n if n is nonnegative, or from 2 * n to n if n is negative. Write the
// code in two versions, one using only for loops and the other using only while
// loops. 

// 정수 n을 입력받아서, n이 양수일 경우 n부터 2 * n까지의 정수를 합하고,
// n이 음수일 경우 2 * n부터 n까지의 정수를 합하는 프로그램을 작성하세요.
// 이 코드는 두 버전으로 작성되어야 하며, 하나는 for 루프만 사용하고 다른 하나는 while 루프만 사용해야 합니다.


#include <stdio.h>

int main(void)
{
    int n, a, b;
    int sum1 = 0, sum2 = 0; //sum1 과 sum2 초기화 중요. 
    

    printf("input integer n: \n");
    scanf("%d",&n);

    if (n >= 0) // n>0에서 수정
    {
        for ( a = n; a <= 2 * n; ++a )
            sum1 += a;
        printf("the result is %d.", sum1);
    }

    else
    {
        for ( b = 2 * n; b <= n; ++b )
            sum2 += b;
        printf("the result is %d.", sum2);
    }
    

    return 0;
        
}

#include <stdio.h>

int main(void)
{
    int n, a, b;
    int sum1 = 0, sum2 = 0; 

    printf("input integer n: \n");
    scanf("%d",&n);

    if (n >= 0) 
    {
        a = n;
        while (a <= 2 * n)
        {
            sum1 += a;
            ++a;
        }
        printf("the result is %d.", sum1);
    }

    else
    {
        b = 2 * n;
        while (b <= n)
        {
            sum2 += b;
            ++b;
        }
         printf("the result is %d.", sum2);
     }

     return 0;   
}


//아래 식은 뤼튼이 적은 거 . 



#include <stdio.h>

int main(void)
{
    int n, i;
    int sum = 0;

    printf("input integer n: \n");
    scanf("%d",&n);

    if (n >= 0)
    {
        for (i = n; i <= 2 * n; ++i )
            sum += i;
        printf("the result is %d.", sum);
    }
    else
    {
        for (i = 2 * n; i <= n; ++i )
            sum += i;
        printf("the result is %d.", sum);
    }

   return 0;
}