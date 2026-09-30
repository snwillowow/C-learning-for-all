//斐波那契数列求第n项

#include <stdio.h>

int main()
{
     int a,b,c,i,n;
     a=b=1;

     printf("请输入你需要得到斐波那契数列的第几位数：");
     scanf("%d",&n);
    
     printf("%d\n",a);
     for(i=1;i<n;i++)
     {
          c=b;
          b+=a;
          a=c;
          printf("%d\n",a);
     }
     
     return 0;
}