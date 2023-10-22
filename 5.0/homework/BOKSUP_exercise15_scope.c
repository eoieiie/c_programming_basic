// This exercise gives you practice on understanding the scope of identifiers. What
// gets printed by the following code? First, hand simulate the code and record your
// answers. Then write a program to check your answers. 



#include <stdio.h>


int main(void)
{
    int a = 1, b = 2, c = 3;

    a += b += ++c; // c = 4, b = 6, a = 7
    
    printf("%5d%5d%5d\n", a, b, c);
    {
        float b = 4.0; //a = 7, b = 4.0, c = 4
        int c; //

        a += c = 5 * b; // a += c = 5 * 4.0 (5 * 4.0 = 20(float와 int가 있으면 float로 변환된다)). c = 20, a = 27, b = 4.0, a는 스코프 안에서 선언되지 않았으므로 바깥 스코프에 영향을 준다. 
        printf("%5d%5.1f%5d\n",a, b, c); //a = 27, b = 4.0, c = 20
    }
    printf("%5d%5d%5d\n", a, b, c);// a = 27, b = 6, c = 4
    
    return 0;
}












