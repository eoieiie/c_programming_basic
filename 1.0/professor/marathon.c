//킬로미터로 바꿔주는 프로그램


#include <stdio.h>

int main(void)
{
    int miles, yards;
    double kilometers;

    miles = 25;
    yards = 385;
    kilometers = 1.609 * (miles +yards / 1760.0);

    printf("\nA marathon is %f kilometers.\n\n", kilometers);

    return 0;
}