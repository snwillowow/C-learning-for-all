//用筛选法求100以内的素数

#include <stdio.h>
#include <string.h>                                    

int main()
{
    int a[101],i,j;
    for(i=0;i<101;i++)     
        a[i]=i;            //对a的每个元素进行赋值
    a[1]=0;                //剥离1

    for(i=3;i<101;i++)
        for(j=2;j<=10&&j<i;j++)
        {if(a[j]==0)continue;
        if(a[i]%a[j]==0)
        {a[i]=0;           //通过赋值为0筛选非素数
        break;}}

    for(j=0,i=2;i<101;i++){
        if(a[i]!=0){printf("%5d",a[i]);
            j++;}
        if(j%10==0)printf("\n");
    }
    return 0;
}