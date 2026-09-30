#include <stdio.h>
#include <math.h>                                      //sqrt平方根，pow幂次(结果为double值)
#include <string.h>                                    //字符串处理

int main()
{
     int a[10],*k,i;
     void f(int x[],int n);
     k=a;

     //输入10个数字
     printf("please enter 10 integer numbers:\n");
     for(i=0;i<10;i++)
          scanf("%d",k++);

     //函数实行交换功能（指针法）
     k=a;
     f(k,10);

     //打印新数列（从大到小）
     for(k=a,i=0;i<10;i++){
          printf("%d ",*k++);
     }
     printf("\n");
     return 0;
}

void f(int x[],int n){
     int i,j,t;
     for(i=0;i<n-1;i++)
          for(j=i+1;j<n;j++)
               if(x[i]<x[j]){t=x[i];x[i]=x[j];x[j]=t;}
}


