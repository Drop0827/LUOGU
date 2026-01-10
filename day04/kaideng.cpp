#include <cstdio>
#include <cmath>
using namespace std;

const int MAXL = 1000005;
bool final[MAXL] = {false};

int main(){
    int n;
    scanf("%d",&n);
    double A;
    int t;
    int index=0;
    for (int i = 1; i <= n; i++) {
        scanf("%lf %d", &A, &t);
        for (int j = 1; j <= t; j++){
            index=A*j;
            final[index]=!(final[index]);
        }    
    }
    for (int i = 1; i <= 1000005; i++)
    {
        if (final[i])
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;

}