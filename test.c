#include <stdio.h>
int main() {
    int jumsu[2][3]={10,20,30,40,50,60},i,j,sum =0;
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            printf("%3d",jumsu[i][j]);
            sum+=jumsu[i][j];
        }
        printf("\n");
    }
    printf("sum is %3d \n", sum);
}