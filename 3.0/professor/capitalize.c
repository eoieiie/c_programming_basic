#include <stdio.h>

int main(void)
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z') //소문자 알파벳인지 확인한다. a는 97, z는 122이다. 
            putchar(c +'A' - 'a');
        else
        putchar(c);
    }
    return 0;
}

//  ASCII 코드에서 대소문자 간 차이는 일정하므로 
// ('A'-'a' 또는 'Z'-'z'), 이런 방식으로 소문자와 대문자 간 변환이 가능합니다.

// &&: 논리 AND. 두 조건 모두 참일 때만 참을 반환합니다.
// ||: 논리 OR. 두 조건 중 하나라도 참이면 참을 반환합니다.
// !: 논리 NOT. 조건의 부정을 나타냅니다.

