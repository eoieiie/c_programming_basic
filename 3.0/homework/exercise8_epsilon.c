//  In mathematics the Greek letter E, called "epsilon," is often used to represent a
// small positive number. Although it can be arbitrarily small in mathematics, on a
// machine there is no such concept as "arbitrarily small." In numerical analYSis it is
// convenient sometimes to declare eps (for "epsilon") as a variable of type double
// and to assign to eps the smallest positive number with the property that
// 1. 0 < 1. 0 + eps
// is true. This number is machine-dependent. See if you can find eps on your
// machine. Begin by assigning the value 1e-37 to eps. You will find that for this value
// the expression is false. 

//무한히 작은, 무한대 라는 개념을 직접적으로 표현 불가능. 실수 값을 다룰 때에는 어느 중도의 오차를 감안해야 함. 
//다음 코드는 c언어로 epsilon을 찾는 방법이다. 


#include <stdio.h>

int main(void)
{
    double eps = 1.0;

    while(1.0 + eps / 2.0 > 1.0) // eps 값을 절반으로 줄이면서, 값이 거의 0이 되면 1.0 + eps = 1.0이 되니까 무한히 작은 eps값을 찾는 것이 가능하다. 
    {
        eps /= 2.0;
    }

    printf("machine epsilon is: %e\n", eps);
    
    return 0;
}



// #include <stdio.h>

// int main() {
//     double eps = 1.0;

//     while (1.0 + eps - 1e-37 > 1.0) {
//         eps -= 1e-37;
//     }

//     printf("Machine epsilon is: %e", eps);

//     return 0;
// }