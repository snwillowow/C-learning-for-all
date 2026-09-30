#include <stdio.h>
#include <math.h>                                      //sqrt平方根，pow幂次(结果为double值)
#include <string.h>                                    //字符串处理

int main()
{
     int a[2][2]={{1,2},{2,3}};
     int *p;
     for(p=a[0];p<a[0]+4;p++){                         //4的计算公式是总数
          if((p-a[0])%2==0)printf("\n");
          printf("%4d",*p);
     }
     return 0;
}