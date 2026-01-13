#include <iostream>
#include <cmath>
using namespace std;

    int N;
    bool isprime(int n){
        if(n == 1) return false;
        if(n == 2) return true;

        for(int i = 2; i<= sqrt(n); i++){
            if(n % i == 0) return false;
        }
        return true;
    }

int main(){
    cin >> N;
    for (int i = 4; i <= N; i+=2){
        for (int  j = 2; j <= i; j++){
            if (isprime(j)){
                if (isprime(i-j)){
                    cout << i << "=" << j << "+" << i-j << endl;
                    break;
                }               
            }           
        }      
    }
    return 0;
}