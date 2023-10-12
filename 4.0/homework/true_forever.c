//Until interrupted, the following code prints TRUE FOREVER on the screen repeatedly. (In UNIX, type a control-c to effect an interrupt.)

#include <stdio.h>

int main(void)
{
    int a, b;      

    while(1)
        printf(" TRUE FOREVER ");

    for(;;)
        printf("TRUE FOREVER");


}





//Write a simple program that accomplishes the same thing, but use a fo r statement
//instead of a whi 1 e statement. The body of the for statement should contain just
//the empty statement";". 
