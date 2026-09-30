#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    int max(int x,int y);
    int min(int x,int y);

    printf("请依次输入三个数字：");
    scanf("%d %d %d",&a,&b,&c);

    d = max(a,b);
    f = max(d,c);
    e = min(a,b);
    g = min(e,c);

    printf("三个数从大到小分别为:%d,%d,%d",f,d,g);
    return 0;
}

int max(int x,int y)
{
    int z;
    if(x>=y)z=x;
    else z=y;
    return(z);
}

int min(int x,int y)
{
    int w;
    if(x<y)w=x;
    else w=y;
    return (w);
}