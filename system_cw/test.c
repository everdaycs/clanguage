#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str); // ��ȡ�ַ�����ֱ���������з�
    printf("The string is: %s\n", str); // �����ȡ�����ַ���

    return 0;
}

