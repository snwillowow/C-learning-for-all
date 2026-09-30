//输入10个数，要求输出其值最大的元素和该数是第几位数

#include <stdio.h>
int main()
{
    int a[10];
    int i,m;
    int max(int x,int y);

    printf("请输入10个整型数(用空格隔开):\n");
    for(i=0;i<10;i++)scanf("%d",&a[i]);

    m=a[0];
    for(i=1;i<10;i++)
    m=max(m,a[i]);

    printf("%d\n",m);
    for(i=0;i<10;i++)
    if(a[i]==m)
    printf("第%d个数\n",i+1);
}

int max(int x,int y)
{
    return x>y?x:y;
}