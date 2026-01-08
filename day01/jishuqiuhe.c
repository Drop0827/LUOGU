#include<stdio.h>
int main(){
    double sum=0.0;
    int k;
    int n=0;
    scanf("%d",&k);
while (sum<=k){
    n++;
    sum+=(1.0/n);
}
printf("%d\n",n);
    return 0;
}