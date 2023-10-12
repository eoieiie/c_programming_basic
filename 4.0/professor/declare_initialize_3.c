#include <stdio.h>

int main(void)
{
    char c = 'B';
    int i = 3, j = 3, k = 3;
    double x = 0.0, y = 2.3;

    i && j && k;                 //(i && j) && k                            1    
    x || i && j -3;              //x || (i && (j - 3))                      0    
    i < j && x < y;              //(i < j) && (x < y)                       0   
    i < j || x < y;              //(i < j) || (x < y)                       1
    'A' <= c && c <= 'z';        //('A' <= c) && (c <= 'Z')                 1 
    c - 1 == 'A' || c + 1 == 'z';   //((c - 1) == 'A') || ((c + 1) == 'Z')     1

    return 0;

}