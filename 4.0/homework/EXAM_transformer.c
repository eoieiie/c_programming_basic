#include <stdio.h>

int main(void)
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z')
            putchar(c + 'A' - 'a');

        else if (c >= 'A' && c <= 'Z')
            putchar(c +'a' -'A');
    }

    return 0;
}




