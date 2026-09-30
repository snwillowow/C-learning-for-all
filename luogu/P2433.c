#include <stdio.h>
#include <math.h>
int main(){
    int T,i;
    double p=3.141593;
    scanf("%d",&T);
    if(T==1)printf("I love Luogu!");
    else if(T==2){
        printf("%d %d",2+4,10-2-4);
    }else if(T==3){
        printf("%d\n",14/4);
        printf("%d\n",14-14%4);
        printf("%d\n",14%4);
    }else if(T==4){
        printf("%.3lf",500.0/3);
    }else if(T==5){
        printf("%d",(260+220)/(12+20));
    }else if(T==6){
        printf("%.4f",sqrt(9*9+6*6));
    }else if(T==7){
        printf("%d\n",100+10);
        printf("%d\n",100+10-20);
        printf("0");
    }else if(T==8){
        printf("%6f\n",2*p*5);
        printf("%6f\n",p*5*5);
        printf("%6f\n",4.0/3*p*5*5*5);
    }else if(T==9){
        int n;
        for(n=4;;n++){
            i=n;
            i=i/2-1;
            i=i/2-1;
            i=i/2-1;
            if(i==1){printf("%d",n);break;}
        }
    }else if(T==10){
        printf("9");
    }else if(T==11){
       printf("%.4f",100.0/3);
    }
    else if(T==12){
        char a,m;
        a='A';
        m='M';
        printf("%d\n",m-a+1);
        printf("%c",a+18-1);
    }else if(T==13){
        printf("%d",(int)pow(4*p*(64+1000)/3,1.0/3.0));
    }else if(T==14){
        for(i=0;i<=110;i++)
            if(i*(120-i)==3500){
                printf("%d",i);
                break;
            }
    }
    return 0;
}