#include <stdio.h>

int main(void)
{
    char c;
    int i;

    for(i = 'a'; i <= 'z'; ++i) //초기식에서 i에 a의 아스키 값 할당. 조건식에서는 i값이 z의 아스키 값보다 작거나 같을 동안 루프 반복. 갱신식에서는 각 반복 후에 i값 1씩 증가.
        printf("%c ", i);
    
    return 0;
}