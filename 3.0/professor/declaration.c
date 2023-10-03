//선언 예제 

#include <stdio.h>

int main(void)
{
    int a, b, c; //declarationth 
    float x, y = 3.3, z = -7.7; //declaration with initializations

    printf("input two integer: "); //function call
    scanf("%d%d", &b, &c); //function call
    a = b + c; //assignment
    x = y + z; //assignment

    //...

    return 0;

}