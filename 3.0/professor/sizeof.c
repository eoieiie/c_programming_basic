// sizeof�� C ����� ���� �����ڷ�, �ǿ������� ũ��(����Ʈ ����)�� ��ȯ�մϴ�. 
// �� �����ڴ� ����, �ڷ���, ����ü � ���� �޸� ũ�⸦ �˾Ƴ��� �� ���˴ϴ�.

// sizeof(operand);

// ���� sizeof�� Ư�� ������ Ÿ�Կ� ���ؼ��� ����� �� �ֽ��ϴ�. 
// ���� ���, sizeof(int)��� ���� 'int' Ÿ���� �����ϴ� ����Ʈ ���� ��ȯ�˴ϴ�.

#include <stdio.h>

int main() {
    int a;
    double b;
    char c;

    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of double: %zu bytes\n", sizeof(b));
    printf("Size of char: %zu bytes\n", sizeof(c));

    return 0;
}

// Size of int: 4 bytes
// Size of double: 8 bytes
// Size of char: 1 byte