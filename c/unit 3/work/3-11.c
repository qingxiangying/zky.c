#include <stdio.h>
int main(void)
{
    int a,b;
    puts("请输入两个整数");
    printf("整数A：");scanf("%d",&a);
    printf("整数B：");scanf("%d",&b);
    if((a-b)<10||(a-b)==10)puts("他们的差小于等于10");
    else puts("他们的差大于等于11");
    return 0;
}