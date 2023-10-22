

// auto
// c
// void func() {
//     auto int x = 1; // auto는 생략 가능하며, 대부분의 경우 실제로 생략됩니다.
//     printf("%d\n", x);
// }




// extern
// 파일 1 (file1.c):

// c
// int x = 10; // 전역 변수
// 파일 2 (file2.c):

// c
// extern int x; // file1.c에 선언된 전역변수 x를 참조

// void func() {
//     printf("%d\n", x); // 출력: 10
// }






// register
// c
// void func() {
//     register int i;
    
//     for(i=0; i<10000; ++i) {
//         printf("%d\n", i);
//     }
// }
// 이 경우 i는 반복문에서 많이 사용되므로 레지스터에 저장되도록 요청합니다.




// static
// 지역변수로서의 static:

// c
// void func() {
//     static int x = 0;
    
//     ++x;
    
//     printf("%d\n", x);
// }

// int main(void) {
// 	func(); // 출력: 1 
// 	func(); // 출력: 2 
// 	func(); // 출력: 3 
// 	return 0;
// }
// 여기서 x는 함수 호출이 끝나도 메모리에서 사라지지 않고 상태를 유지합니다.

// 전역변수로서의 static:
// 파일 (file.c):

// c
// static int y = 10;

// int get_y() { return y; } 

// // 이 파일 내에서만 y 변수가 접근 가능하며, 다른 파일에서 이 변수를 직접 참조할 수 없습니다.
// // 다른 파일에서 y 값을 얻으려면 get_y 함수를 통해야 합니다.