#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int A[1010];
    int B[1010];
    for (int i = 1; i <= n; i++)
        scanf("%d",&A[i]);   
    for(int i = 1; i < n; i++)
		B[i] = abs(A[i] - A[i + 1]);
    sort(B + 1, B + n);
    for (int i = 1; i < n; i++)
    {
        if (B[i] != i)
        {
            printf("Not jolly\n");
            return 0;
        }
    }
    printf("Jolly\n");
    return 0;
}