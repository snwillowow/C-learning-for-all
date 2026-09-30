//判断一个数是否为素数

#include <stdio.h>

int main()
{
     int a,n;
     printf("输入一个正整数:");
     scanf("%d",&a);
     
     for(n=2;n<a;n++)
          if (a%n==0||n==1)
          {printf("%d,不是素数\n",a);
               n=1;
               break;
          }
     
     if(n!=1)printf("%d,为素数\n",a);
     return 0;
}