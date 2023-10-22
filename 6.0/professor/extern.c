#include <stdio.h>

int a = 1, b = 2, c = 3; //글로벌변수
int f(void);

int main(void)
{
    printf("%3d\n", f());  //12 
    printf("%3d%3d%3d\n", a, b, c); //4 2 3 바뀐 a의 값은 유지되고, 나머지는 f의 영향을 받지 않으므로 초깃값인 2, 3 을 반환. 

    return 0;
}

int f(void)
{
    int b, c; //로컬변수
    
    a = b = c = 4; //a가 해당 스코프 안에서 정의되지 않았으므로 초기의 a = 1값을 변형. a = 4로 유지
    
    return (a + b + c);
}