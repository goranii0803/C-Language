// #1883
#include <stdio.h>
int main () {
    int a,i;
    scanf("%d", &a);
    for(i=1;i<=a;i++){
        for(int j=0;j<a-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<a;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<a-i;k++){
            printf("*");
        }
        printf("\n");
    }
}