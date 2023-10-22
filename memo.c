//printf("%6d", 42); 
// %6d: 필드 폭이 6인 오른쪽 정렬된 숫자.
//Output: '    42' (4개의 공백 + '42')

//printf("%-6d", 42);
//%-6d: 필드 폭이 6인 왼쪽 정렬된 숫자
// Output: '42    ' ('42' + 4개의 공백)

//printf("%06d", 42);
//%06d: 필드 폭이 6인 오른쪽 정렬된 숫자, 빈 자리에는 '0'으로 채움
// Output: '000042'

#include <stdio.h>
int main(void)
{
    int a, b, c, d, e;
    a = 1;
    b = 2;
    c = 3;
    d = 4;

    e = (a++ == b-- && --c < d ? a++ : b++);

    printf("%d%3d%3d%3d%3d", a, b, c, d, e);
}



