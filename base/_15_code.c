#include<stdio.h>

// 输入两个正整数m和n，求其最大公约数和最小公倍数。
int main(void){
    int m, n;
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);

    int max = m, min = n;
    if(max<min){
        max = n;
        min = m;
    }
    
    for(int i=max;i<=min*max;i++){
        if(i%max==0 & i%min==0){
            printf("LCM = %d\n", i);
            printf("GCD = %d", min * max / i);
            break;
        }
    }

    return 0;
}
