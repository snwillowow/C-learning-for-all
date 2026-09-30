#include <stdio.h>
int main(){
    int expense;
    int i;
    int save_hundreds=0;
    int cash=0;
    const int MONTHLY = 300;
    for(i=1;i<=12;i++){
        scanf("%d",&expense);
        cash+=MONTHLY-expense;
        if(cash<0){
            printf("-%d",i);
            break;
        }
        else {
            save_hundreds+=cash/100;
            cash=cash%100;
        }
    }
    if(i==13)printf("%d",cash+save_hundreds*(120));
    return 0;
}