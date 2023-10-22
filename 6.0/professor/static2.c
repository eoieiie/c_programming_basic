// #include <stdio.h>

// void counter() {
//     static int count = 0;
//     printf("%d ", ++count);
// }

// int main() {
//     for(int i = 0; i < 5; ++i)
//         counter();
//     return 0;
// }


#include <stdio.h>

static void printHello() {
    printf("Hello World!");
}

int main() {
    printHello();
    return 0;
}

// 위 코드에서 printHello() 함수는 static으로 선언되어 있습니다. 이 의미는 이 함수가 정의된 소스 파일 내부에서만 호출할 수 있다는 것입니다.

