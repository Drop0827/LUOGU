#include<iostream>
#include<string>
using namespace std;

string S;

int boy=0;
int girl=0;

int main(){
    cin >> S;
    for(int i=0;i<S.size();i++){
        if(S[i]=='b'||S[i+1]=='o'||S[i+2]=='y'){
            boy++;
        }
        if(S[i]=='g'||S[i+1]=='i'||S[i+2]=='r'||S[i+3]=='l'){
            girl++;
        }
    }
    cout<<boy << endl;
    cout<<girl<< endl;


    return 0;    
}