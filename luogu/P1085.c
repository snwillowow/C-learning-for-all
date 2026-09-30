#include <stdio.h>
int main(){
    int a,b;
    int i;
    int k=0,sum=0;
    for(i=0;i<7;i++){
        scanf("%d %d",&a,&b);
        int total=a+b;
        if(total>8 && sum<total){
            sum=total;
            k=i+1;
    }
    }
    printf("%d",k);
    return 0;
}