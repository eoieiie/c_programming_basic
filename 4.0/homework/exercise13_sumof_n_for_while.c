// Write a program that reads in an integer value for n and then sums the integers
// from n to 2 * n if n is nonnegative, or from 2 * n to n if n is negative. Write the
// code in two versions, one using only for loops and the other using only while
// loops. 

// ���� n�� �Է¹޾Ƽ�, n�� ����� ��� n���� 2 * n������ ������ ���ϰ�,
// n�� ������ ��� 2 * n���� n������ ������ ���ϴ� ���α׷��� �ۼ��ϼ���.
// �� �ڵ�� �� �������� �ۼ��Ǿ�� �ϸ�, �ϳ��� for ������ ����ϰ� �ٸ� �ϳ��� while ������ ����ؾ� �մϴ�.


#include <stdio.h>

int main(void)
{
    int n, a, b;
    int sum1 = 0, sum2 = 0; //sum1 �� sum2 �ʱ�ȭ �߿�. 
    

    printf("input integer n: \n");
    scanf("%d",&n);

    if (n >= 0) // n>0���� ����
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


//�Ʒ� ���� ��ư�� ���� �� . 



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