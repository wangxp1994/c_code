#include<stdio.h>
#include<windows.h>
#include<string.h>

// 输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。
int main(void){
    char s[100];
    printf("string = ");
    scanf("%[^\n]", &s); //输入空字符串

    int len = strlen(s);
    int a=0, b=0, c=0, d=0;
    int val;    
    for(int i=0;i<len;i++){
        val = s[i];
        // 字母
        if((val>=65 & val<=90) | (val>=97 & val<=122)){
            a++;
        }
        // 数字
        else if(val>=48 & val<=57){
            b++;
        }
        // 空格
        else if(val==32){
            c++;
        }
        else{
            d++;
        }
    }

    printf("\n%d, %d, %d, %d", a, b, c, d);
    
    printf("\n");
    system("pause");
    return 0;
}