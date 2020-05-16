//
// Created by Acmer_ly on 2020/3/14.
//习题4-8 高空坠球 (20分)
#include <stdio.h>

int main(void) {
    long h, n;
    scanf("%ld%ld", &h, &n);
    double height = (double)h;
    double ans = 0, high = 0;
    int cnt = 0;
    while (cnt < n) {
        cnt ++;
        if (cnt == n) {
            ans += height;
            break;
        }
        ans += height * 1.5;
        height = height * 0.5;
    }
    if (n != 0) {
        high = height * 0.5;
    } else {
        high = 0;
    }
    printf("%.1lf %.1lf\n", ans, high);
    return 0;
}

