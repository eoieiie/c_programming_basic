// getchar() ���ڸ� �Է¹ް� 
// putcahr() ���ڸ� ��¹޴´�.

// getchar()�� �� ���ڸ� �Է¹ް�, �� ASCII����  int���·� ��ȯ�Ѵ�. 
// �Է��� �����ϰų� EOF(end of file)�� �����ϸ� EOF�� ��ȯ�Ѵ�. 
// int c = getchar();

// putchar �Լ��� intŸ���� ���� �ϳ��� �޾� �ش� ASCII���� �����ϴ� ���ڸ� ����ϰ�, 
// ����� ������ ASCII���� ��ȯ�մϴ�. ���� ����� �����ϸ� EOF�� ��ȯ�մϴ�. 
// putchar(c);

#include <stdio.h>

int main() {
    int c;

    printf("Enter a character: ");
    c = getchar();  // Read a character from the input, ���ڸ� �ƽ�Ű��

    printf("You entered: ");
    putchar(c);     // Print the character to the output, �ƽ�Ű�� ���ڷ�

    return 0;
}