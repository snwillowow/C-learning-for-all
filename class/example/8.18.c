#include <stdio.h>
int main(){
    char a[]="I love China!",b[20];
    int i,j;
    for(i=0;a[i]!='\0';i++){
        *(b+i)=*(a+i);
    }
    printf("%s",b);
    return 0;
}