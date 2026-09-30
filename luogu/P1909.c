//p1909
#include <stdio.h>
#define type 3
int main(){
    int i;
    int need;
    int per_pack,price;
    int min_cost=0;
    int packs,cost;
    scanf("%d",&need);
    for(i=1;i<=type;i++){
        scanf("%d %d",&per_pack,&price);
        packs=(need+per_pack-1)/per_pack;
        cost=price*packs;
        if(cost<min_cost||min_cost==0)min_cost=cost;
    }
    printf("%d",min_cost);
    return 0;
}