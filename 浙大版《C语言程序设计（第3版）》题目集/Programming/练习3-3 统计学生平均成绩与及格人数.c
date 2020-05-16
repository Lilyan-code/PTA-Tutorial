//
// Created by Acmer_ly on 2020/3/13.
//练习3-3 统计学生平均成绩与及格人数 (15分)
#include <stdio.h>
const int maxn = 1e5 + 5;

int main(void) {
    int n;
    int a[maxn];
    double average = 0;
    int count = 0;
    int sum = 0;
    scanf("%d", &n);
    if(n == 0) {
        printf("average = %.1lf\n", n);
        printf("count = %d\n", n);
        return 0;
    }
    for (int i = 0; i < n; i ++) {
        scanf("%d", &a[i]);
        if (a[i] >= 60) {
            count ++;
        }
        sum += a[i];
    }
    printf("average = %.1lf\n", (double)sum / (double)n);
    printf("count = %d\n", count);
    return 0;
}

