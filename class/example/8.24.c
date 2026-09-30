#include <stdio.h>
int main(){
    void f(int x,int y,int(*p)(int,int));
    int max(int ,int);
    int min(int ,int);
    int sum(int ,int);
    int a=22,b=2,n;
    scanf("%d",&n);
    if(n==1)        f(a,b,max);
    else if(n==2)   f(a,b,min);
    else if(n==3)   f(a,b,sum);
    return 0;
}

void f(int x,int y,int(*p)(int,int)){
    int result;
    result=(*p)(x,y);
    printf("%d\n",result);
}

int max(int x,int y){
    printf("max=");
    return x>y?x:y;
}

int min(int x,int y){
    printf("min=");
    return x>y?y:x;
}

int sum(int x,int y){
    printf("sum=");
    return x+y;
}