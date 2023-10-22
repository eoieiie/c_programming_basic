#include <stdio.h>

int factorial(int n) {
    if (n == 0) 
        return 1;
    else 
        return n * factorial(n-1);
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}




//---------------------------------------------------------------------------





#include <stdio.h>

int fibonacci(int n) {
   if(n <= 1)
      return n;
   else
      return(fibonacci(n-1) + fibonacci(n-2));
}

int main() {
   int num = 9;

   for (int i = 0; i < num; i++) {
      printf("%d ", fibonacci(i));  
   }
   
   return 0;
}





//---------------------------------------------------------------------------






#include <stdio.h>

int gcd(int a, int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main(){
    int a = 60, b =48;
    printf("GCD of %d and %d is %d",a,b,gcd(a,b));
    
    return 0;
}