#include <stdio.h>
#define N 7

long power(int, int);
void prn_heading(void);
void prn_tbl_of_powers(int);






int main(void) //main �Լ�
{
    prn_heading();
    prn_tbl_of_powers(N);
    
    return 0;
}





void prn_heading(void) //������ �ۼ��ϴ� �Լ�. 
{
    printf("\n::::: A table of powers :::::\n\n");
}

void prn_tbl_of_powers(int n) 
{
    int i, j;
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n; ++j)
        {
            if(j == 1)
                printf("%ld", power(i, j)); //ù��° ���ڴ� ���ʿ� ���̰� 
            else
                printf("%9ld", power(i, j)); //�� ���� ���ڵ��� 9ĭ �ȿ��ٰ� ä���. 
        }
        putchar('\n'); //�ƴϸ� printf("\n")�ص� �ȴ�!
    }
}

long power(int m, int n)
{
    int i;
    long product = 1;
    for (i = 1; i <= n; ++i)
        product *= m;
    
    return product;
}


// %5d: ������ �޾� �ּ��� 5ĭ�� ���� ���� 10������ ����մϴ�.
// %-5d: ������ �޾� �ּ��� 5ĭ�� ���� ������ ���� ���ĵ� 10������ ����մϴ�.
// %08d: ������ �޾� �ּ��� 8ĭ�� ���� ������, �� ������ �ִٸ� '0'���� ä�� ���¿��� ������ ���ĵ� ���ڷ� ����մϴ�.
// %.2f: �ε� �Ҽ��� ���� �޾� �Ҽ��� �Ʒ� �� �ڸ������� ǥ���Ͽ� ����մϴ�.