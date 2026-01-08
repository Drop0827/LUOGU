#include<stdio.h>
int main(){
    int money=0;
    int cost=0;
    int mom=0;
    bool flag=true;
    for (int i = 1; i <= 12; i++){
        money+=300;
        scanf("%d",&cost);
        money-=cost;
        if (money<0){
            printf("-%d",i);
            flag=false;
            break;
        }
        if (money/100>0){
            mom+=(money/100)*100;
            money-=(money/100)*100;
        } 
    }
    if (flag){
    money+=mom*1.2;
    printf("%d",money);
    }
    return 0;
}