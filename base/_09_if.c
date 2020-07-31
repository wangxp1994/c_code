#include<stdio.h>

int main(void){
    int num;
    printf("Please enter a number\n");
    scanf("%d", &num);
    if(num>100){
        printf("%d > 100", num);
    }
    else if(num > 50){
        printf("%d > 50", num);
    }
    else{
        printf("%d <= 50", num);
    }

    
    return 0;
}