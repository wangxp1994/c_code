#include<stdio.h>

// 有三个整数a b c,由键盘输入，输出其中的最大的数。
int main(void){
    int a, b, c;
    printf("please enter first number: ");
    scanf("%d", &a);
    printf("please enter first number: ");
    scanf("%d", &b);
    printf("please enter first number: ");
    scanf("%d", &c);
    
    int max = a;
    if(max<b){
        max = b;
    }
    if(max<c){
        max = c;
    }
    printf("the max number is %d", max);
    return 0;
}