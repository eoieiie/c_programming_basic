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

        while (1) //����ڰ� ���� ������ ����ؼ� ���ڸ� �Է¹޴´�.
        {
            printf("\nInput x: ");
            if (scanf("%lf", &x) != 1) //�Ǽ��� ���� �Է¹޾� ���� x�� �����ؾ� �ϴµ�, ���� �Ǽ��� �ƴ϶�� 0�� ��ȯ�Ѵ�. "����ڷκ��� ����� �� �Ǽ����� ���� ���ߴٸ�" �̶�� ���� �ȴ�.
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