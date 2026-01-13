#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseDigits(const string &numStr) {
    string reversedStr = numStr;
    reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}

int main(){
    string numStr;
    cin >> numStr;
    char temp = ' ';
    int len = numStr.length();
    if (numStr[0] != '-') {
        // 正数反转
        for (int i = 0; i < len / 2; i++) {
            temp = numStr[i];
            numStr[i] = numStr[len - i - 1];
            numStr[len - i - 1] = temp;
        }
        int pos = 0;
        while (pos < numStr.length() - 1 && numStr[pos] == '0') {
            pos++;
        }
        cout << numStr.substr(pos) << endl;
    } else {
        // 负数反转（不动负号）
        for (int i = 1; i <= (len - 1) / 2; i++) {
            temp = numStr[i];
            numStr[i] = numStr[len - i];
            numStr[len - i] = temp;
        }
        // 去除负号后的前导0
        int pos = 1;
        while (pos < numStr.length() - 1 && numStr[pos] == '0') {
            pos++;
        }
        cout << '-' << numStr.substr(pos) << endl;
    }
    return 0;
}



