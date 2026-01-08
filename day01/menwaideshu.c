#include<stdio.h>
int main(){
    int tree[100002];
    int l,m,sum=0;
    scanf("%d %d",&l,&m);

    for (int i = 0; i < m; i++){
    int u,v;
    scanf("%d %d",&u,&v);
    for (int j = u; j <= v; j++){
        tree[j] = 1;
    }
    }
    for (int i = 0; i <= l; i++)
    {
        sum+=!(tree[i]);
    }

    printf("%d\n",sum);
    return 0;
}