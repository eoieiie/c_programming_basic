#include <stdio.h>

int main() {
    int day;

    printf("Enter a number between 1 and 7: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
             printf("Saturday\n"); 
             break; 
         case 7: 
             printf("Sunday\n"); 
             break; 
         default:                               //case들 중 어느 것과도 일치하지 않을 때 실행되는 부분을 나타냄. 
                                                //모든 case 조건이 실패ㅐ할 경우를 대비한 기본 동작을 정의한다. 
             printf("Invalid Day"); 
             break; 

    }

    return 0;
}


// switch (x) {
//     case 1:
//         printf("One");
//         break;
//     case 2:
//         printf("Two");
//         break;
//     default:
//         printf("Not One or Two");
// }
