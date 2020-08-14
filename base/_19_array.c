#include<stdio.h>
#include<windows.h>
#include<string.h>

char *fun_one(){
    char str[100] = "One";
    return str;
}

char *fun_two(){
    char *str = "Two";
    return str;
}

char *fun_four(char *str){
    strcpy(str, "Four");
    return str;
}

char *fun_three(){
    char *str;
    str = (char *)malloc(100);
    strcpy(str, "Three");
    return str;
}

// 返回数组
int main(void){
    char *p;
    p = fun_one();
    printf("One is %s\n", p);

    p = fun_two();
    printf("Two is %s\n", p);

    char str[100] = "\0";
    fun_four(str);
    printf("Four is %s\n", str);

    p = fun_three();
    printf("Three is %s\n", p);
    free(p);    //用完free,防止内存泄漏

    printf("\n");
    system("pause");
    return 0;
}