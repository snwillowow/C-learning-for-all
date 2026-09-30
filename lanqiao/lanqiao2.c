#include <stdio.h>
int main(){
    int n,m=0;
    scanf("%d",&n);
    while (n!=0){
        int temp=n;
        int sum=0;
        while(temp!=0){
            sum+=temp%10;
            temp=temp/10;
        }
        n-=sum;
        m++;
    }
    printf("%d",m);
    return 0;
}