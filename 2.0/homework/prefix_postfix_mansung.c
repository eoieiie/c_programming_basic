#include <stdio.h>

int main()
{
    int a = 5, b = 3;

    int result1 = ++a * (b-- - (a - b)); //���� ���� ����Ǵ°� b--. ()�켱������ �Լ�ȣ���� ��ȣ�̴�.
    int result2 = a * b++ - a * b; 
    // int result2 = -a - - ++b -b;

    printf("a : %d\n", a);
    printf("b : %d\n", b);
    printf("result1 : %d\n", result1);
    printf("result2 : %d\n", result2);

    return 0;

}

