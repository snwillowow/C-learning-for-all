#include <stdio.h>
int main()
{
    void f(int x[],int n);

    int a[10]= {1,2,3,4,5,6,7,8,9,0},n,i;

    printf("原数列为：");
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    
    f(a,10);

    printf("其倒叙为:");
    for(i=0;i<10;i++)
    printf("%d ",a[i]);

    return 0;
}

void f(int x[],int n)
{
    int i,k,j=(n-1)/2;
    int *p;
    for(i=0;i<=j;i++)
    {
        k=n-1-i;
        p=x[i];
        x[i]=x[k];
        x[k]=p;
    }
}