// Write a function int is_prime(int n) that returns 1 if n is a prime and 0
// otherwise. Hint: If k and n are positive integers, then k divides n if and only if n % k has
// value zero. 
//소수면 1, 아니면 0반환하는 프로그램 작성


#include <stdio.h>

int is_prime(int n);

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(is_prime(n))
        printf("The number is prime.");
    else
        printf("The number is not prime.");
        
    return 0;
}

int is_prime(int n)
{
    if (n <= 1) 
        return 0;

    int a = 2;
    
    while(a < n)
    {
        if (n % a == 0) 
            return 0; 
        else 
            a += 1;
     }
     
     return 1; // If no divisor found then it's a prime number
}



// 15 22 
