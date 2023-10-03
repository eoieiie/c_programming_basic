#include <stdio.h>

int main(void)
{
    char c = 'a';

    printf("%c\n", c); //a is printed
    printf("%d\n", c); // 97 is printed
    printf("%c%c%c\n", c, c+1, c+2); // abc is printed


    return 0;
}