#include <stdio.h>
int main(void)
{
    int no;
    printf("请输入一个整数");
    scanf("%d",&no);
    if (no%5)
    {
        puts("该整数不能被5整除。");
    }
    else
    puts("该数能被5整除。");
    
}