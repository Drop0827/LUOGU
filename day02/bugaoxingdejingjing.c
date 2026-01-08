#include<stdio.h>

int main() {
    int a[7], b[7];
    int max_unhappy = 0; // 记录最大不高兴程度
    int day = 0;         // 记录最不高兴的那一天

    for (int i = 0; i < 7; i++) {
        scanf("%d %d", &a[i], &b[i]);
        int total = a[i] + b[i]; // 每天的总上课时间
        if (total > 8 && total > max_unhappy) {
            max_unhappy = total; // 更新最大不高兴程度
            day = i + 1;         // 更新最不高兴的那一天
        }
    }

    printf("%d", day); // 输出结果
    return 0;
}