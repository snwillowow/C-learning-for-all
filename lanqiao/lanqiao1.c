#include <stdio.h>
int main(){
    int max(int x,int y);
    int n,i,temp;
    scanf("%d",&n);
    
    //记录出现各种颜色的次数
    int b[10]={0};

    for (i=0;i<n;i++){
        scanf("%d",&temp);
        b[temp]+=1;
    }

    //统计出现最频繁的颜色
    int k=b[0];
    for(i=1;i<10;i++){
        k=max(b[i],k);
    }
    n-=k;
    printf("%d",n);
    return 0;
}

//比大小的函数
int max(int x,int y){
    return x>y?x:y;
}