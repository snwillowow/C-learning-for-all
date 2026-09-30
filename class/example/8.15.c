#include <stdio.h>
int main(){
    float a[3][4]={{44,89,78,43},{59,76,89,88},{99,98,97,100}};
    void search(float (*p)[4],int n);
    search(a,3);
    return 0;
}

void search(float (*p)[4],int n){
    int i,j;
    for(j=0;j<n;j++){
        for(i=0;i<4;i++){
            if(*(*(p+j)+i)<=60){
                printf("No.%d fail\n",j+1);
                for(i=0;i<4;i++){
                    printf("%.2f ",*(*(p+j)+i));
                    }
                printf("\n");
                break;
            }
        }
    }
}