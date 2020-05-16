//
// Created by Acmer_ly on 2020/3/12.
//练习2-12 输出华氏-摄氏温度转换表 (15分)

#include <stdio.h>

int main(void) {
    int lower;
    int upeer;
    scanf("%d %d", &lower, &upeer);
    if (lower > upeer || lower > 100 || upeer > 100) {
        printf("Invalid.\n");
    } else {
        printf("fahr celsius\n");
        for (int i = lower; i <= upeer; i += 2) {
            double C = 5 * (double )(i - 32) / (double)9;
            printf("%d%6.1lf\n", i, C);
        }
    }
    return 0;
}

