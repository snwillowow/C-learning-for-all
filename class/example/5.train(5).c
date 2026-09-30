//求Sn=a+aa+aaa+……+aa……a(n个a),a为一个已知常数

#include <stdio.h>
#include <math.h> 

int main()
{
     int sn,a,n,t,i;
     scanf("%d %d",&a,&n);

     for(sn=0,t=0,i=1;i<=n;i++)
     {t+=a*pow(10,i-1);
     printf("%d ",t);
     if(i%10==0)printf("\n");
     sn+=t;}
     printf("%d",sn);
     return 0;
}