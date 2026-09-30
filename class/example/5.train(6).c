//1!+2!+……+n!

#include <stdio.h>

int main()
{
     int n,i,k,sn,z;
     sn = z = 0;
     printf("求1!+2!+……+n!的和,请输入n的值:");
     scanf("%d",&n);

     for (;n>0;n--)
     {for(k=1,i=1;i<=n;i++)k=k*i;
     sn = sn + k;
    z+=1;}
     
     printf("1!+2!+……+%d!=%d",z,sn);
     return 0;
}