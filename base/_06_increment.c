#include<stdio.h>

int main(void){
    int a, b;
    a = b = 5;

    printf("%d  %d\n", a--, --b);
    printf("%d  %d\n", a--, --b);
    printf("%d  %d\n", a--, --b);
    printf("%d  %d\n", a--, --b);
    printf("%d  %d\n", a--, --b);

    printf("the last value: a = %d, b = %d\n", a, b);

    return 0;
}