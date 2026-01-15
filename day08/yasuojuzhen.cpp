#include<iostream>
#include<string>
using namespace std;

int N;
int t=1;
string a, b;

int main(){
    cin>>a;
    N=a.length();
    // cout << N <<" ";
    while(cin>>b){
        a+=b;
    }
    cout << N <<" ";
    if (a[0]!='0'){
        cout<<"0 ";
    }
    for (int i = 1; i < N*N; i++){
        if (a[i]==a[i-1])
        {
            t++;
        }else{
            cout<<t<<" ";
            t=1;
        }    
    }
    cout<<t;
    return 0;
}