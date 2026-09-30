#include <stdio.h>
#include <stdlib.h>

int main (){
    int *p,i;
    void check(int*);
    p=malloc(5*sizeof(int));
    for(i=0;i<5;i++){
        scanf("%d",p+i);
    }
    check(p);
    return 0;
}

void check(int*p){
    int i;
    for(i=0;i<5;i++)
        if(p[i]<60)printf("%d ",p[i]);
}