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
         default:                               //case�� �� ��� �Ͱ��� ��ġ���� ���� �� ����Ǵ� �κ��� ��Ÿ��. 
                                                //��� case ������ ���Ф��� ��츦 ����� �⺻ ������ �����Ѵ�. 
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
