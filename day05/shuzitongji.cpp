#include<bits/stdc++.h>
using namespace std;

int main(){
    int L,R;
    cin >> L >> R;
    int count = 0;
    for(int i = L; i <= R; i++) {
        string s = to_string(i);
        for(int j = 0; j < s.length(); j++) {
            if(s[j] == '2') {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}