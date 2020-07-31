#include<stdio.h>

// 有一个函数
// y={ x      x<1
//     | 2x-1   1<=x<10
//     \ 3x-11  x>=10

// 写一段程序，输入x，输出y
int main(void){
    int x, y;
    printf("x = ");
    scanf("%d", &x);

    if(x<1){
        y = x;
    }
    else if(x<=10){
        y = 2 * x - 1;
    }
    else{
        y = 3 * x - 11;
    }

    printf("y = %d", y);

    return 0;
}