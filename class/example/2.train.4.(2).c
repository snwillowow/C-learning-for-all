//比较输入的10个数

#include <stdio.h>

int main()
{
    int max(int x,int y);
    int a,b,c,d,e,f,g,h,i,j,t;
    
    scanf("%d",&a);
    scanf("%d",&b);
    t = max(a,b);
    scanf("%d",&c);
    t = max(t,c);
    scanf("%d",&d);
    t = max(t,d);
    scanf("%d",&e);
    t = max(t,e);
    scanf("%d",&f);
    t = max(t,f);
    scanf("%d",&g);
    t = max(t,g);
    scanf("%d",&h);
    t = max(t,h);
    scanf("%d",&i);
    t = max(t,i);
    scanf("%d",&j);
    t = max(t,j);
    
    printf("%d",t);
    
    return 0;
}

int max(int x,int y)
{
    int z;
    
    if(x>=y)z=x;
    else z=y;
    
    return(z);
}