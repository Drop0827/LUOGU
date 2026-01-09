#include <stdio.h>
int main(){
    int n;
    int k;
    scanf("%d %d",&n,&k);
    int count=n+(n-1)/(k-1);
    printf("%d\n",count);
    return 0;
}