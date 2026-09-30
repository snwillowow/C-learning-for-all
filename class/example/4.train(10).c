//年终奖计算

#include <stdio.h>

int main()
{    int a,n1=1,n2=2,n3=4,n4=6,n5=10;   //n的计算公式为工资挡位/100000
     double b,p,bl0=0.1,bl1=0.075,bl2=0.05,bl3=0.03,bl4=0.015,bl5=0.01;
     char c;

     
     printf("请输入你的工资：");
     scanf("%d",&a);
     
     b = a/100000.0;

     if (b<=n1)c='f';
     else if(b<=n2)c='e';
     else if(b<=n3)c='d';
     else if(b<=n4)c='c';
     else if(b<=n5)c='b';
     else c='a';

     switch(c){
          case 'f':
          p = a*bl0;
          break;
          case 'e':
          p = n1*100000*(bl0-bl1)+a*bl1;
          break;
          case 'd':
          p = n2*100000*(bl0-bl2)+a*bl2;
          break;
          case 'c':
          p = n3*100000*(bl0-bl3)+a*bl3;
          break;
          case 'b':
          p = n4*100000*(bl0-bl4)+a*bl4;
          break;
          case 'a':
          p = n5*100000*(bl0-bl5)+a*bl5;
          break;
          }
     
     printf("%.2lf",p);

     return 0;
}