//数字串变换（求出几位数；输出每一位数字；逆序输出各位数字。

#include <stdio.h>

int main()
{
     int a,len,ts,s,h,t,n;
     
     printf("请输入一个小于或等于五位的正整数：");
     
     scanf("%d",&a);
     
     if(a>99999)printf("输入格式错误");
     else {
          if(a>9999)len=5;
     else if(a>999)len=4;
     else if(a>99)len=3;
     else if(a>9)len=2;
     else len=1;
     printf("这是一个%d位数\n",len);

     ts = (int)a/10000;
     s = (int)((a-ts*10000)/1000);
     h = (int)((a-ts*10000-s*1000)/100);
     t = (int)((a-ts*10000-s*1000-h*100)/10);
     n = a-ts*10000-s*1000-h*100-t*10;

     switch(len){
          case 1:
          printf("每一位数字分别是%d\n",n);
          printf("逆向输入为%d\n",n);
          break;
          case 2:
          printf("每一位数字分别是%d,%d\n",t,n);
          printf("逆向输入为%d%d\n",n,t);
          break;
          case 3:
          printf("每一位数字分别是%d,%d,%d\n",h,t,n);
          printf("逆向输入为%d%d%d\n",n,t,h);
          break;
          case 4:
          printf("每一位数字分别是%d,%d,%d,%d\n",s,h,t,n);
          printf("逆向输入为%d%d%d%d\n",n,t,h,s);
          break;
          case 5:
          printf("每一位数字分别是%d,%d,%d,%d,%d\n",ts,s,h,t,n);
          printf("逆向输入为%d%d%d%d%d\n",n,t,h,s,ts);
          break;
     }
     }
     return 0;
}