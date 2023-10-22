#include <stdio.h>

int main(void)
{
    int a = 2;
    int b = 3;
    int c;

    c = a > b ? a : b; //the result is false, so it returns b. 
    c += a == b ? a++ : b++; //+= has very low priority compared to ==. a == b is not true, so it returns b++ which is 4. and it puts its value to c.
}


int main(void)
{
    int a = 2;
    int b = 3;
    int c = 4;
    int d;
    int e = 5;

    d = a++ * --b + ++c; // 9
    d = (a > b ? a : b) < c ? (a < b ? a : b) : c; //b < c ? a : c
    d += (a == --b && ++c > e ? ++a : --b); // b, being reduced twice
    e *= (a++ == b-- && --c < e ? a++ : b++); //result is 10, and final states of variables are: a:3, b:3, c:3


}


// 괄호: ()
// 단항 연산자: ++, --, + (단항 플러스), - (단항 마이너스), !, ~
// 산술 연산자: *, /, %
// 산술 연산자: +, -
// 시프트 연산자: <<, >>
// 관계 연산자: <, <=, >, >=
// 관계 연산자: ==, !=
// 비트 AND 연산자: &
// 비트 XOR 연산자: ^
// 비트 OR 연산자 : |
// 논리 AND 연산자 : &&
// 논리 OR 연산서 : ||
// 조건(삼항)연산서 : ? :
// 할당연상서 : = , += , -= , *= , /= , %= , &= , ^= , |= , <<= , >>=
