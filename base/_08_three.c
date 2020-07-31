#include<stdio.h>
/*
三目运算符
所谓的“目”是指这个运算符参与运算的对象个数
表达式1?表达式2:表达式3
*/
int main(void){
    int a = 3, b = 5;
    int c;
    c = c ? (a + b):(a - 5);
    printf("c = %d", c);
    return 0;
}