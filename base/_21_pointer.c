#include<stdio.h>
#include<windows.h>

// 指针的定义和使用
struct INFO{
    int a;
    char b;
    double c;
};

int main(void){
    int num = 2020;
    int *p = &num;
    printf("num Address = 0x%x, num=%d\n", &num, num); //num Address = 0x61fe14, num=2020
    printf("p = 0x%x, *p=%d\n", p, *p); //p = 0x61fe14, *p=2020
    printf("%d\n", *&num); //2020

    printf("%d\n", sizeof(p)); //8
    struct INFO *pp;
    printf("%d\n", sizeof(pp)); //8

    printf("\n");
    system("pause");
    return 0;
}