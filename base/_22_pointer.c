#include<stdio.h>
#include<windows.h>

// 数组与指针
int main(void){
    int i;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int *p = a;
    for(i=0;i<10;i++){
        printf("P Value:%d   a Value :%d\n",*(p++),*(a+i));
    }

    printf("\n");
    system("pause");
    return 0;
}