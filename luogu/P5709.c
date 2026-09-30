#include <stdio.h>
int main(){
    int m,t,s;
    scanf("%d %d %d",&m,&t,&s);
    if(t!=0){
        int n;
        n=m-s*1.0/t;
        if(n>0){printf("%d",n);}
        else printf("0");
    }else printf("0");
    return 0;
}