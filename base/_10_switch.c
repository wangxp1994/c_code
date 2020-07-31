#include<stdio.h>

int main(void){
    int num;
    printf("num = \t");
    scanf("%d", &num);

    switch(num){
        case 1:printf("A");break;
        case 2:printf("B");break;
        case 3:printf("C");break;
        default:printf("D");break;        
    }

    return 0;
}