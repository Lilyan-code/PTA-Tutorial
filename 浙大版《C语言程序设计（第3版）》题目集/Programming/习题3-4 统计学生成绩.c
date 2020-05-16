//
// Created by Acmer_ly on 2020/3/13.
//习题3-4 统计学生成绩 (15分)
#include <stdio.h>
const int maxn = 1005;

int main(void) {
    int score[maxn];
    int ans[5] = {0};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++) {
        scanf("%d", &score[i]);
        if (score[i] >= 90) {
            ans[0] ++;
        } else if(score[i] >= 80 && score[i] < 90) {
            ans[1] ++;
        } else if(score[i] >= 70 && score[i] < 80) {
            ans[2] ++;
        } else if(score[i] >= 60 && score[i] < 70) {
            ans[3] ++;
        } else {
            ans[4] ++;
        }
    }
    printf("%d %d %d %d %d\n", ans[0], ans[1], ans[2], ans[3], ans[4]);
    return 0;
}

