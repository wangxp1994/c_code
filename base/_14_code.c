#include<stdio.h>
#include<string.h>

// 给出一个不多于5位的整数，要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321,应输出123
int main(void){
    char s[5];
    printf("num = ");
    scanf("%s", &s);

    int len = strlen(s);
    printf("len = %d", len);

    printf("\n");
    for(int i=0;i<len;i++){
        printf("%c", s[i]);
    }

    int j=len-1;
    printf("\n");
    do{
        printf("%c", s[j]);
    }while(j-->0);

    return 0;
}