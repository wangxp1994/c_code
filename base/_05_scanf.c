#include<stdio.h>

int main(void){
    int num;
    printf("Please enter three number:\n");
    //*在scanf()中提供截然不同的服务,当把它放在%和说明符字母之间时,它使函数跳过相应的输入项目
    scanf("%*d %*d %d", &num);
    printf("The last number is %d\n", num);

    return 0;
}