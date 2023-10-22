// Use the library function sqrtO to write a function that returns the fourth root of
// its i nt argument k. The value returned should be a double. Use your function to
// make a table of values. 


#include <stdio.h>
#include <math.h>

double library(int k);

int main(void)
{
    int k;
    scanf("%d", &k);
    double rslt = library(k);
    printf("%f", rslt);

    return 0;
}

double library(int k)
{
    return pow(k, 0.25); //or sqrt(sqrt(k))
}


///////////////////////////////////////////////////


double library(int k);

int main(void)
{
    int k;
    scanf("%d", &k);
    if(k == 1)
    {
        printf("%1f", library(k));
    }
    else
    {
        printf("%9f", library(k));
    }
    library(k);

    return 0;
}

double library(int k)
{

    int i;

    return pow(k, 0.25);
}


#include <stdio.h>
#include <math.h>

double fourth_root(int k);

int main(void)
{
    printf("k\tFourth root of k");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\t%.2f", i, fourth_root(i));
    }

    return 0;
}

double fourth_root(int k)
{
    return sqrt(sqrt((double)k));
}