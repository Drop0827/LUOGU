#include<iostream>
using namespace std;

int n;
long long a[100005];
int first=0;
int next1=0;
int ans=1;
int max1=0;

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (int i = 1; i < n; i++){
        first=a[i];
        next1=a[i+1];
        if (first==(next1-1)){
            ans++;
       
        }else{
            ans=0;
        }
             if (ans>max1){
                max1=ans;
            }
           
    }   
    cout << max1+1 << endl;
    return 0;
}