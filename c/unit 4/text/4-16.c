#include <stdio.h>
int main(void)
{
    int i,j,no,a;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            printf("%3d",j*i);
        }
        printf("\n");
    }
    return 0;
} 