// getchar() 문자를 입력받고 
// putcahr() 문자를 출력받는다.

// getchar()는 한 문자를 입력받고, 그 ASCII값을  int형태로 반환한다. 
// 입력이 실패하거나 EOF(end of file)에 도달하면 EOF를 반환한다. 
// int c = getchar();

// putchar 함수는 int타입의 인자 하나를 받아 해당 ASCII값에 대응하는 문자를 출력하고, 
// 출력한 문자의 ASCII값을 반환합니다. 만약 출력이 실패하면 EOF를 반환합니다. 
// putchar(c);

#include <stdio.h>

int main() {
    int c;

    printf("Enter a character: ");
    c = getchar();  // Read a character from the input, 문자를 아스키로

    printf("You entered: ");
    putchar(c);     // Print the character to the output, 아스키를 문자로

    return 0;
}