#include<stdio.h>
/*
sizeof是C语言的32个关键字之一，并非“函数”，也叫长度(求字节)运算符,
sizeof是一种单目运算符，以字节为单位返回某操作数的大小，用来求某一
类型变量的长度。其运算对象可以是任何数据类型或变量
*/
int main(void){
    int n = 0;
    int intsize = sizeof(int);
    printf("int sizeof is %d bytes\n", intsize);
    return 0;
}