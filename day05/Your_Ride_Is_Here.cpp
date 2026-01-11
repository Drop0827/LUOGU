#include<iostream>
#include <cstdio>
using namespace std;

int main(){
    // int A=1,B=2,C=3,D=4,E=5,F=6,G=7,H=8,I=9,J=10,K=11,L=12,M=13,N=14,O=15,P=16,Q=17,R=18,S=19,T=20,U=21,V=22,W=23,X=24,Y=25,Z=26;
    string s1, s2;
    cin >> s1 >> s2;
    int sum1 = 1, sum2 = 1;
    for(int i = 0; i < s1.length(); i++) {
        sum1 *= (s1[i] - 'A' + 1);
    }
    for(int i = 0; i < s2.length(); i++) {
        sum2 *= (s2[i] - 'A' + 1);
    }
    int result = sum1 % 47;
    int result2 = sum2 % 47;
    if(result == result2) {
        cout << "GO" << endl;
    } else {
        cout << "STAY" << endl;
    }
    return 0;
}