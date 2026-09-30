#include <stdio.h>

void aver(float *p,int n){
    float *p_end;
    p_end=p+n-1;
    float sum=0;
    for(;p<=p_end;p++){
        sum+=(*p);
    }
    printf("%.2f\n",sum);
    printf("%.2f\nz",sum/n);
}

void SUM(float (*p)[4],int n){
    float sum=0;
    int i;
    for(i=1;i<=4;i++){
        sum+=*((*p+n-1)+i);
    }
    printf("%.2f",sum);
}

int main(){
    float a[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
    void aver(float *p,int n);
    void SUM(float (*p)[4],int n);
    aver(*a,12);
    SUM(a,2);
    return 0;
}
