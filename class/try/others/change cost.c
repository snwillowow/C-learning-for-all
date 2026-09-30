//找零计算器需要用户做两个操作：输入购买的金额,输入支付的票�?,而找零计算器则根据用户的输入做出相应的动�?;计算并打印找�?,或告知用户余额不足以购买�?

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("how much:");
    scanf("%d",&a);
    printf("your pay:");
    scanf("%d",&b);
    c = b-a;
    if(c>=0)printf("return the money:%d",c);
    else printf("out of pay");
    return 0;
}