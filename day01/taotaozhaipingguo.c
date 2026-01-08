#include <stdio.h>

int main() {
    int apple_heights[10];
    int max_reach_height;
    int count = 0;

    // 输入 10 个苹果的高度
    for (int i = 0; i < 10; i++) {
        scanf("%d", &apple_heights[i]);
    }

    // 输入陶陶的最大可触及高度
    scanf("%d", &max_reach_height);

    // 陶陶的实际可触及高度
    int reachable_height = max_reach_height + 30;

    // 计算陶陶能够触碰到的苹果数量
    for (int i = 0; i < 10; i++) {
        if (apple_heights[i] <= reachable_height) {
            count++;
        }
    }

    // 输出结果
    printf("%d\n", count);

    return 0;
}