#include <iostream>
#include <limits>
using namespace std;

int max_val = numeric_limits<int>::max();
int min_val = numeric_limits<int>::min();
int main(){
    long long min1,max1;
    long long min2,max2;
    cin >> min1 >> max1;
    cin >> min2 >> max2;
    long long a,b,c,d;
    a=min1*min2;
    b=min1*max2;
    c=max1*min2;
    d=max1*max2;

    long long actual_min = min({a, b, c, d});
    long long actual_max = max({a, b, c, d});
    if (actual_min < min_val || actual_max > max_val) {
        cout << "long long int" << endl;
    } else {
        cout << "int" << endl;
    }



    // if (a<min_val||a>max_val||b<min_val||b>max_val||c<min_val||c>max_val||d<min_val||d>max_val)
    // {
    //     cout <<"long long int"<<endl;
    // }else{
    //     cout <<"int"<<endl;
    // }
    
    return 0;
}