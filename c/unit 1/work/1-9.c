#include <stdio.h>
int main(void)
{
    int n1,n2,n3;
    printf("请输入三个整数\n");
    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);
    printf("整数3:"); scanf("%d", &n3);
    printf("他们的和是%d",n1+n2+n3);
    return 0; 
}