//斐波那契数列求第n项

#include <stdio.h>

int main()
{
     int a,b,i;
     a=b=1;
    
     for(i=1;i<=20;i++)
     {
          printf("%-12d %-12d ",a,b);
          if(i%2==0)printf("\n");
          a=a+b;
          b=a+b;
     }
     
     return 0;
}