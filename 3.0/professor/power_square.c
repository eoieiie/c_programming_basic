#include <math.h>
#include <stdio.h>

int main(void)
{
    double x;
    printf("\n%s",
        "the following will be computed:\n"
        "\n"
        "   the square root of x\n"
        "   x raiesd to the power x\n"
        "\n");

        while (1) //사용자가 원할 때까지 계속해서 숫자를 입력받는다.
        {
            printf("\nInput x: ");
            if (scanf("%lf", &x) != 1) //실수형 값을 입력받아 변수 x에 저장해야 하는데, 만약 실수가 아니라면 0을 반환한다. "사용자로부터 제대로 된 실수값을 받지 못했다면" 이라는 뜻이 된다.
                break;
            if (x >= 0.0)
                printf("\n%15s%22.15e\n%15s%22.15e\n%15s%22.15e",
                    "x = ", x,
                    "sqrt(x) = ", sqrt(x),
                    "pow(x, x) = ", pow(x, x));
            else
            {
                printf("\nsorry, your number must be nonnegative.\n");
                break;
            }
        }
        printf("\nbye!\n\n");
        
        return 0;
}