// // 이항계수를 구하는 함수는 재귀적 방법을 이용하여 구현하시오.


// #include <stdio.h>

// int bin_coef(int n, int k);

// int main(void)
// {
//     int n, k;

//     printf("input n, k : ");
//     scanf("%d %d", &n, &k);
//     printf("n combination k is : %d\n", bin_coef(n, k));
    
//     return 0;
// }

// int bin_coef(int n, int k)
// {

//     int a, b, c, x = 1, y = 1, z = 1;


//     int n2 = n, k2 = k, nk = n-k;
//     int result = 0;

//     if (0 <= k && k <= n)
//     {

//         for(a = 1; a <= n; a++)
//         {   
//             x *= n2;
//             n2--;
//         }

//         for(b = 1; b <= k; b++)
//         {
//             y *= k2;
//             k2--;
//         }

//         for(c = 1; c <= n-k; c++)
//         {
//             z *= nk;
//             nk--;
//         }

//         result += x / (y*(z));

//     }

//     else
//     {
//         printf("%d", 1);

//     }

//     return result;
// }



//재귀함수로 사용하려면

#include <stdio.h>

int bin_coef(int n, int k);

int main(void)
{
    int n, k;

    printf("input n, k : ");
    scanf("%d %d", &n, &k);
    printf("n combination k is : %d\n", bin_coef(n, k));
    
    return 0;
}

int bin_coef(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    else
        return bin_coef(n - 1, k - 1) + bin_coef(n - 1, k);
}

