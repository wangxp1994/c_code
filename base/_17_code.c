#include<stdio.h>
#include<windows.h>

void printList(int lst[]);
// 输入10个数字，然后逆序输出。
int main(void){
    int lst[10];
    scanf("%d %d %d %d %d %d %d %d %d %d", &lst[0], &lst[1], &lst[2], &lst[3], &lst[4], &lst[5], &lst[6], &lst[7], &lst[8], &lst[9]);
    printList(lst);

    printf("\n");
    system("pause");
    return 0;
}

void printList(int lst[]){
    for(int i=0;i<10;i++){
        printf("\t%d",lst[9-i]);
    }
}