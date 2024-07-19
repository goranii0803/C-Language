#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int a[2][5],i,j;
    srand(time(NULL));
    for(i=0;i<2;i++) {
        for(j=0;j<5;j++) {
            a[i][j]=rand()%100 + 1;
        }
    }
    for(i=0;i<2;i++) {
        for(j=0;j<5;j++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
}