#include<stdio.h>

//格式化输出函数printf
int main(void){
    int a = 12;
    float b = 3.1415;
    char c = 'A';
    char d;
    printf("%d\n", a);      //12
    printf("o%o\n", a);     //o14
    printf("0x%d\n", a);    //0x12
    printf("%2.1f\n", b);   //3.1
    printf("%c\n", c);      //A
    d = getchar();  //字符输入函数
    putchar(d);     //字符输出函数 

    return 0;
}