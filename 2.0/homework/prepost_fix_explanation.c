#include <stdio.h>

int main(void)
{
    int a, b, c = 0;

    a = ++c; // c = c + 1���� ��� �� a = c ����. a = 1, c = 1, b = 0
    b = c++; // b = c ���� ��� �� c = c + 1 ����. a = 1, c = 2, b = 1

    printf("%d, %d, %d\n", a, b, ++c); 
    // printf("%d, %d, %d\n", a, b, c++); 
    // printf("%d\n", c);
    // �� ����ó�� ���� ++c�� �ƴ϶� c++���ٸ�
    // 1, 1, 2 �� ��µǰ� c�� 3���� �����. 
    
    return 0;
}

