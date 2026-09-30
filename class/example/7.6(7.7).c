//用递归的方式求n！

#include <stdio.h>
int main()
{
    double fac(float);
    int a;
    printf("请输入一个正整数，我将为其进行阶乘运算：");
    scanf(" %d",&a);
    printf("%d的计算结果如下:%.0lf",a,fac(a));
    return 0;
}

//定义阶乘函数（递归）
double fac(float n)
{
    float x;
    
    if(n>1)                 x=fac(n-1)*n;
    else if(n==0||n==1)     x=1;
    else printf("输入错误！");

    return x;
}

