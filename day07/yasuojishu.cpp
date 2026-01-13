#include<iostream>
using namespace std;

    int N;
    int sum=0,cnt=0,ct=0,ans=0;

int main(){

    cin >> N;
    sum=N*N;
    while (ans<sum){
        cin>>ct;
        for (int i = 0; i < ct; i++){
            cout<<cnt;
            ans++;
            if(ans%N==0){
                cout<<endl;
            }
        }
          cnt=1-cnt;// 切换 0 和 1。
    }
    return 0;
}