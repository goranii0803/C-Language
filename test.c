#include <stdio.h>
int main() {
    int jumsu[2][3]={0},i,j;
    printf("input\n");
    for(i=0;i<2;i++) {
        for (j=0;j<3;j++) {
            scanf("%d", &jumsu[i][j]);
        } 
    }
    printf("2차원 배열 출력\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d",jumsu[i][j]);
        }
        printf("\n");
    }
}