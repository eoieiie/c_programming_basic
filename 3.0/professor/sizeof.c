// sizeof는 C 언어의 내장 연산자로, 피연산자의 크기(바이트 단위)를 반환합니다. 
// 이 연산자는 변수, 자료형, 구조체 등에 대한 메모리 크기를 알아내는 데 사용됩니다.

// sizeof(operand);

// 또한 sizeof는 특정 데이터 타입에 대해서도 사용할 수 있습니다. 
// 예를 들어, sizeof(int)라고 쓰면 'int' 타입이 차지하는 바이트 수가 반환됩니다.

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