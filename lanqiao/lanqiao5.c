#include <stdio.h>
int main()
{
    int N,i,j,n;
    N=3;
    i=N;
    void zz(int N,int a[][N]);
    int a[N][N];
    
    for(n=0;n<((N+1)/2);n++){
        zz(a,N);
        i--;
        if(i==1)a[(N+1)/2][(N+1)/2]=N*N;
    }

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%4d",a[i][j]);
        }
    if(j%N==0)printf("\n");
    }
    return 0;
}

void zz(int N,int a[][N]){
    int i,j,n;
    n=1;
    for(i=0,j=0;j<N;j++){
        a[i][j]=n;
        n++;}
    j--;
    i++;
    for(;i<N;i++){
        a[i][j]=n;
        n++;}
    j--;
    i--;
    for(;j>=0;j--){
        a[i][j]=n;
        n++;}
    j++;
    i--;
    for(;i>0;i--){
        a[i][j]=n;
        n++;}
}

