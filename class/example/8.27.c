#include <stdio.h>
#include <string.h>

int main(){
    void sort(char*name[],int n);
    char *name[]={
        "Follow me","BASIC","Great Wall","FORTRAN","Computer design"
    };

    int n=5;
    sort(name,n);

    int i=0;
    for(;i<n;i++)
    printf("%s\n",name[i]);
    printf("\n");

    return 0;
}

void sort(char*name[],int n){
    char *temp;
    int i,j,k;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(name[i],name[j])>0){
                temp=name[i];
                name[i]=name[j];
                name[j]=temp;
            }
        }
    }
}