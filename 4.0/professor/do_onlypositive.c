#include <stdio.h>

int main(void)
{

    int n, error;

    do
    {
        printf("Input a positive integer: ");
        scanf("%d", &n);
        if (error = (n <= 0))
            printf("\nError: do it again\n");
        else
        printf("good.");

    } while (error);

    return 0;
    
}