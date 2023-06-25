#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str); // 读取字符串，直到遇到换行符
    printf("The string is: %s\n", str); // 输出读取到的字符串

    return 0;
}

