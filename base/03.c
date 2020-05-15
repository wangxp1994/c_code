#include<stdio.h>

int main(void){
    int a = 12;
    float b = 3.1415;
    char c = 'A';
    char d;
    printf("%d\n", a);
    printf("o%o\n", a);
    printf("0x%d\n", a);
    printf("%2.1f\n", b);
    printf("%c\n", c); 
    d = getchar();   
    putchar(d);
    return 0;
}