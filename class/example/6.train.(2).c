//整形数列的排序
#include <stdio.h>

int main()
{
    int a[10],i,j,t,n;
    
    //赋值
    printf("接下来需要你逐个输入每个数字的值\n");
    for(i=0;i<10;i++)
    {printf("请输入10个整数(任意两个数之间用空格隔开):\n");
     scanf("%d",&a[i]);
     }
    printf("\n");
   
    //原序列打印
    printf("原序列为:\n");
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    printf("\n");
    
    //菜单
    printf("选择你需要的模式:\n"
        "1、从小到大排列;\n"
        "2、从大到小排列;\n");
    scanf("%d",&n);
    printf("ok,你选择的是模式%d,请稍等……\n",n);
    switch(n){
        
        case 1:
        //排序(从小到大)
        for(i=0;i<10;i++)
            {for(j=i+1;j<10;j++){
                if(a[i]>a[j]){t=a[i];
                a[i]=a[j];
                a[j]=t;}
            }}
        //打印
        printf("从小到大排列为:\n");
        for(i=0;i<10;i++)
        printf("%5d",a[i]);
        break;
        
        case 2:
        //排序(从大到小)
        for(i=0;i<10;i++)
            {for(j=i+1;j<10;j++){
                if(a[j]>a[i]){t=a[i];
                a[i]=a[j];
                a[j]=t;}
            }}
        //打印
        printf("从小到大排列为:\n");
        for(i=0;i<10;i++)
        printf("%5d",a[i]);
        break;
        
        default:
        printf("你输错咯,我们重新来。");
        break;
    }
    
    return 0;
}