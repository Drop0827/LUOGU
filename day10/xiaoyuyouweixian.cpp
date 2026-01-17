#include<bits/stdc++.h>  // 万能头文件，替代所有#include<iostream>等
using namespace std;
int main(){
    double v = 7.0;  // 初始速度
    double s, x;     // s目标值，x误差范围
    double l = 0.0;  // 累计游过的总路程
    cin >> s >> x;
    
    // 核心逻辑：一直游，直到游到【探测区间左边界】s-x 为止
    while(l < s - x){
        l += v;      // 每一次游动：路程累加当前速度值
        v *= 0.98;   // 每一次游动后：速度衰减2% (乘以0.98)
    }
    
    // 关键判断：游完这一步后，再游一次的距离 是否不超过【探测区间右边界】
    if(l + v <= s + x){
        cout << 'y' << endl;
    }else{
        cout << 'n' << endl;
    }
    return 0;
}