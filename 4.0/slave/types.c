#include <stdio.h>
int main(int argc, char *argv[])
{
    printf("the size of  fundamental types\n\n");
    printf("char: %31u byte \n", sizeof(char));
    printf("short: %31u byte \n", sizeof(short));
    printf("int: %31u byte \n", sizeof(int));
    printf("long: %31u byte \n", sizeof(long));
    printf("unsigned: %31u byte \n", sizeof(unsigned));
    printf("float: %31u byte \n", sizeof(float));
    printf("double: %31u byte \n", sizeof(double));
    printf("long double: %31u byte \n", sizeof(long double));

    return  0;

}