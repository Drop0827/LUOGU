#include<stdio.h>
int main(){
    int n,k;
    int yt=0;
    int count=0;
    scanf("%d %d",&n,&k);
    while (n!=0)
    {
        n--;
        yt++;
        if (yt==k)
        {
            n++;
            yt=0;
        }
        count++;
    }
    printf("%d\n",count);
}