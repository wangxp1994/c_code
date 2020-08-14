#include<stdio.h>
#include<windows.h>

// 指针地址
int main(void){
    int i;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    char b[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    for(i=0;i<10;i++){
        printf("int Address:0x%x, Value:%d\n", &a[i], a[i]);
    }
    for(i=0;i<10;i++){
        printf("char Address:0x%x, Value:%c\n", &b[i], b[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}