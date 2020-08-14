#include<stdio.h>
#include<windows.h>
#include<string.h>

// 数组越界
int main(void){
    int a = 5;
    char str[10] = {0};
    strcpy(str, "123456789123");
    printf("str = %s\n", str);
    printf("a = %d\n", a);

    printf("\n");
    system("pause");
    return 0;
}