// break �� continue �� �������� ������ �帧�� �ߴܽ�Ŵ.



#include <stdio.h>
#include <math.h>

int main(void)
{
    //�������� ��ȯ�ϴ� break ��
    double x;


    while(1)
    {
        scanf("%lf", &x);
        if( x < 0.0)
            break; //x�� ������ ��� break
        printf("%f\n", sqrt(x));

    }
    //break ���� ����� �����Ѵ�. 
    return 0;

}