#include <stdio.h>

int main(void)
{
    char c;
    int lowercase_letter_cnt = 0;
    int total_cnt = 0;

    while ((c = getchar()) != EOF) 
    {
        if (c >= 'a' && c <= 'z')
            ++lowercase_letter_cnt;
        ++total_cnt;
    }

    printf("Number of lowercase letters: %d\n", lowercase_letter_cnt);
    printf("Total number of characters: %d\n", total_cnt);

    return 0;
}