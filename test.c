#include <stdio.h>
int main () {
    int fibo[100] = {0,1,}, i, cnt;
    scanf("%d",&cnt);
    for(i=2;i<=cnt;i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    for(i=0;i<=cnt;i++) {
        printf("%d",fibo[i]);
    }
}