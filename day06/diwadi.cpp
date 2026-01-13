#include <iostream>
using namespace std;

int A[100005];

int main(){
    int n;
    int ans = 0;
    cin >> n;
    for (int i = 0; i <n; i++){
        cin >> A[i];
    }
    for (int  i = 1; i < n-1; i++){
        if (A[i] < A[i-1] && A[i] < A[i+1]){
            ans++;
        }
        if (A[i-1]>A[i]&&A[i+1]==A[i]){
            while (A[i+1]>=A[i]){
                i++;
            }
            if (A[i]>A[i-1]){
                ans++;
            }              
        }       
    }
    cout<<ans<<endl;
    return 0;
} 