// 변환
// int i = 10;
// double d;
// d = i; 

// 정수 i가 실수로 자동으로 변환되어 d에 저장됩니다. 
//i의 값은 유지됩니다.



//캐스팅
// double d = 3.14;
// int i;
// i = (int)d;  

// 실수 d를 정수로 캐스팅하여 i에 저장합니다.
// d의 값은 여전히 3.14지만, (int)d 표현식은 3이 됩니다



//변환과 캐스팅 모두 원본 데이터를 변경하지 않습니다.

//unsigned는 0과 양수만 표현 가능하다. 

// char short int -> int
// unsigned int double -> double
// char int -> int
// char double -> double
// double short -> double 
// int long -> long

// 다음은 일반적인 타입 프로모션 규칙입니다:

// char와 short는 연산을 수행하기 전에 항상 int로 프로모션됩니다.
// 피연산자 중 하나가 long double 형이면, 다른 피연산자들도 모두 long double으로 프로모션됩니다.
// 그렇지 않고 피연산자 중 하나가 double 형이면, 다른 피연산자들도 모두 double으로 프로모션됩니다.
// 그렇지 않고 피연산자 중 하나가 float 형이면, 다른 피연산자들도 모두 float으로 프로모션됩니다.
// 그렇지 않고 피연산자 중 하나가 unsigned long long, long long, unsigned long, or 'long' 형이면, 다른 피연산자들도 해당 타입으로 프로모션 될 수 있습니다.
// u 랑 l이 만나면 system  dependant 라고 한다. 

//즉 

// long double
// double
// float
// unsigned long
// long
// unsigned
// int 순서대로 자동 타입 변환이 이루어진다. 

//long과 unsigned의 경우 모든 값을 long으로 표현할 수 있으면 long으로 변환, 
//아니라면 unsigned long으로 변환


// C 언어의 표준 데이터 타입들을 표현할 수 있는 값의 범위가 더 넓은 순으로 나열하면 다음과 같습니다:

// char / unsigned char
// short / unsigned short
// int / unsigned int
// long / unsigned long
// long long / unsigned long long
// float
// double
// long double





// (double) i: i라는 변수를 double 타입으로 캐스팅합니다.
// (long) ('A' + 1.0): 문자 'A'의 아스키 코드 값에 1.0을 더한 후 long 타입으로 캐스팅합니다.
// f = (float) ((int) d + 1): d라는 변수를 int로 캐스팅한 후 1을 더하고 그 결과를 float로 캐스팅하여 f에 저장합니다.
// d = (double) i / 3: i라는 변수를 double로 캐스팅한 후 3으로 나누고 그 결과값을 d에 저장합니다.
// (double) (x = 77) : x에 77을 대입하고 그 결과값인 77을 double로 캐스트 합니다.
// 다음과 같은 경우가 잘못된 예입니다:

// (double)x = 77; // equivalent to ((double)x)=77, error.: 이 문장은 x를 double로 바꾼 상태에서 값을 할당하려 하므로 오류가 발생합니다.

// (float)i + 3 <==> ((float)i)+3 연산자 우선순위에 대한 내용입니다. 
// 이것은 (float)i가 먼저 계산되며, 이후에 결과 값에다가 정수인 '3'이 더해집니다. 
// 왜냐하면 괄호와 같이 '( )' 안의 연산이 '+', '-' 등보다 우선하기 때문입니다.