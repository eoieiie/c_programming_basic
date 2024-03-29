#include <stdio.h>

int main(void)
{
    int a = 1, b = 2, c = 3;
    printf("%3d%3d%3d\n", a, b, c); //1 2 3
    {
        int b = 4;
        float c = 5.0;
        printf("%3d%3d%5.1f\n", a, b, c); //1 4 5.0
        a = b; // a = 4, a변수가 해당 스코프 안에서 선언되어 있지 않기에, 가장 가까운 밖의 스코프에서 a의 값을 바꾼다. 
        {
            int c;
            c = b; // c = 4
            printf("%3d%3d%3d\n", a, b, c); // 4 4 4 
        }
        printf("%3d%3d%5.1f\n", a, b, c); //4 4 5.0
    }
    printf("%3d%3d%3d\n", a, b, c); //4 2 3
}



// a 변수가 중간에 4로 변경이 되었지만 그건 스코프 범위의 안쪽에 있는 값 아니야? 그럼 float  c = 5.0에 대한 변경사항은 왜 출력 결과에 영향을 주지 않는거야?

// eoieiie의 어시스턴트
// GPT4
// a = b;라는 구문이 실행되는 시점에서 a와 b는 모두 현재 스코프 내에 있는 변수를 참조합니다. 이 경우, b는 해당 스코프에서 새롭게 선언된 값인 4를 가지고 있으며, 이 값이 바깥쪽 스코프의 a에 할당됩니다. C 언어에서는 이렇게 내부 스코프에서 바깥쪽 스코프의 변수를 수정하는 것이 가능합니다.
// 그러나 반대로, 바깥쪽 스코프에서 내부 스코프의 변수를 직접 참조하거나 수정하는 것은 불가능합니다. 따라서 float c = 5.0;과 같은 구문은 해당 스코프 내에서만 유효하며, 바깥스 쪽스 쿠퍼에 영항을 주지 않습니다.
// 마지막 printf 문장이 실행될 때는 가장 바깥 쪽의 c(즉, 처음 선언된 정수형 'c')가 사용되므로 그 값은 여전히 3입니다. 이 때문에 "4 2 3"이 출력됩니다.


// 그럼 c = b;는 ?

// eoieiie의 어시스턴트
// GPT4
// c = b;는 현재 스코프 내에서 b의 값을 c에 할당하는 구문입니다. 이 때 b와 c는 모두 해당 스코프 내에서 선언된 변수를 참조합니다.
// 이 구문이 실행되는 블록({}) 안에서, b는 4의 값을 가지고 있습니다. 따라서 이 구문은 새롭게 선언된 정수형 변수 c(바깥쪽 스코프의 float형 'c'와 다른 변수)에 4를 할당합니다.
// 그러나 이 변경은 해당 블록을 벗어나면 사라집니다. 마지막 printf 문장이 실행될 때는 가장 바깥 쪽의 c(즉, 처음 선언된 정수형 'c')가 사용되므로 그 값은 여전히 3입니다.




// 이해가 잘 안 돼. a = b는 스코프 밖의 a를 변형시키면서 왜 c = b는 스코프 밖의 c를 변형시키지 않는 거야?

// eoieiie의 어시스턴트
// GPT4
// 코드에서 a = b; 구문이 실행되는 시점의 스코프 내에는 a 변수가 선언되어 있지 않습니다. 따라서 이 구문은 바깥 스코프의 a를 참조하게 됩니다. 하지만 같은 스코프 내에 b라는 이름의 새로운 변수가 선언되어 있으므로, 이 b(값이 4인)를 참조합니다. 결과적으로 바깥 스코프의 a는 4로 변경됩니다.
// 반면, c = b; 구문이 실행되는 블록({}) 안에서는 이미 새롭게 선언된 정수형 변수 c가 존재합니다. 따라서 이 구문은 현재 스코프 내에 있는 'c'와 'b'를 참조하게 됩니다. 그래서 바깥 스코프의 'c' 값은 변하지 않습니다.
// 즉, C 언어에서 변수를 참조할 때 현재 스코프부터 시작해서 바깥으로 나아가며 가장 먼저 발견한 해당 이름의 변수를 사용합니다. 이 규칙 때문에 동일한 이름을 가진 서로 다른 범위의 변수들 사이에서 혼동이 생길 수 있습니다.




// 그럼 만약 코드에서 a = b; 구문이 실행되는 시점의 스코프 내에 a변수가 선언되어 있었다면 바깥 스코프의 a값은 변하지 않았겠네? 마찬가지로 만약 c = b; 구문이 실행되는 블록({}) 안에서 c변수가 선언되어 있지 않았다면 해당 스코프 밖의 float c의 값을 바꾸는거고?

// eoieiie의 어시스턴트
// GPT4
// 네, 맞습니다.
// 만약 a = b; 구문이 실행되는 스코프 내에 a 변수가 선언되어 있었다면, 해당 스코프 내의 'a' 값만 변경되고 바깥 스코프의 'a' 값은 그대로 유지됩니다.
// 반대로, c = b; 구문이 실행되는 블록({}) 안에서 c 변수가 선언되어 있지 않다면, 이 구문은 바깥 스코프의 'c'를 참조하게 됩니다. 따라서 이 경우 바깥 스코프의 'c' 값이 변경됩니다.
// C 언어에서 변수를 참조할 때 현재 스코프부터 시작해서 바깥으로 나아가며 가장 먼저 발견한 해당 이름의 변수를 사용합니다. 따라서 현재 스코프 내에 해당 이름의 변수가 없으면 바깥 쪽을 찾아나갑니다. 이런 규칙 때문에 동일한 이름을 가진 서로 다른 범위(scope)의 변수들 사이에서 혼동이 생길 수 있습니다.

#include <stdio.h>

int main(void)
{
    int x = 10, y = 20, z = 30;
    printf("%3d%3d%3d\n", x, y, z); // 10, 20, 30

    {
        int y = 40;
        double z = 50.0;
        printf("%3d%3d%5.1f\n", x, y, z); //10, 40, 50.0
        x = y; //스코프 안에서 x가 정의되지 않았기 때문에 원래의 x값 40으로 변경

        {
            int z;
            z = y; 
            printf("%3d%3d%3d\n", x, y, z); //40, 40, 40
        }
        
        printf("%3d%3d%5.1f\n", x, y, z); //40, 40, 50.0
    }

    printf("%3d%3d%3d\n", x, y ,z); //40, 20, 30
}