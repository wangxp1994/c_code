#include<stdio.h>

//使用可变宽输出字段
int main(void){
    unsigned width, precision;
    int number = 256;
    double weight = 25.5;

    printf("Please input number's width:\n");
    scanf("%d", &width);
    printf("This number is:%*d\n", width, number);
    printf("Then please input width and precision\n");
    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*f\n", width, precision, weight);

    return 0;
}

/*
结果为:
Please input number's width:
6
This number is:   256
Then please input width and precision
6 3
Weight = 25.500
*/