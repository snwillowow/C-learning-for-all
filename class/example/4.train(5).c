//计算小于1000的正整数的平方根

#include <stdio.h>
#include <math.h>
int main()
{
     int a;
     double b,c,d;
     printf("请输入一个小于1000的整数:");
     scanf("%d",&a);
     if (a>1000)printf("输入应小于1000");
     else b=sqrt(a);
     c = b;
     while(c>1)
     {
          c-=1;
     }
     d = b - c;
     printf("%.2f\t%.0f\n",b,d);
     return 0;
}