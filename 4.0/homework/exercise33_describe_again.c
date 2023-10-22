// // The mathematical operation min (x, y) can be represented by the conditional expression
// // (x < y) ? x : y
// // In a similar fashion, using only conditional expressions, describe the mathematical operations
// // min(x, y, z) and max(x, y, z, w)

// // 수학적 연산 min(x, y)는 조건식 (x < y) ? x : y로 표현될 수 있습니다. 
// // 마찬가지로, 조건식만을 사용하여 수학적 연산 min(x, y, z)와 max(x, y, z, w)를 설명하십시오.



// min(x, y, z): 최소값을 찾는 함수는 다음과 같이 표현할 수 있습니다:

// c
// ((x < y) ? ((x < z) ? x : z) : ((y < z) ? y : z))
// 이 식은 먼저 x와 y를 비교하여 둘 중 작은 값을 선택하고 그 결과를 다시 z와 비교하여 가장 작은 값을 찾아냅니다.

// max(x,y,z,w): 최대값을 찾는 함수는 다음과 같이 표현할 수 있습니다:

// c
// ((x > y)? ((x > z)? ((x > w)? x: w): ((z > w)? z: w)): ((y > z)? ((y > w)? y: w):((z > w)?z:w)))
// 이 식은 먼저 x와 y를 비교하여 둘 중 큰 값을 선택하고 그 결과를 다시 나머지 값들과 비교하여 가장 큰 값을 찾아냅니다.




// #include <stdio.h>

// int main(void)
// {
     
// }
