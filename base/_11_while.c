#include<stdio.h>

int main(void){
    int i=65;    
    while(i++<68){
        printf("int %d\n", i);
    }

    do{
        printf("int %d\n", i);
    }while(++i<71);
    
    int sum=0;
    for(int j=0;j<=100;j++){
        sum += j;
    }
    printf("sum =  %d\n", sum);

    return 0;
}