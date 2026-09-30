//数组元素比大小，第三方定义max

#include <stdio.h>

int main()
{
     int a[3][4]={{2,3,5,8},{3,54,65,13},{12,-23,5,66}};
     int max,i,j,c,d;
     max = a[0][0];
     
     for(i=0;i<3;i++){
          for(j=0;j<4;j++)
          if(a[i][j]>max)
          {max = a[i][j];
          c=i;
          d=j;}
     }
     
     printf("%d\n[%d][%d]",max,c,d);

     return 0;
}