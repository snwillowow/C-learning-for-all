#include <stdio.h>
#include <math.h>

int main()
{
     int n,i,k;
     scanf("%d",&n);
     k = sqrt(n);                                //若被整除则必有一个因数小于k，另一个大于k
     for(i = 2;i<=k;i++)
          if(n%i==0)break;
     if(i<k)printf("不是素数\n");
     else printf("是素数\n");
     return 0;
}