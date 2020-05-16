//
// Created by Acmer_ly on 2020/3/13.
//练习3-7 成绩转换 (15分)
#include <stdio.h>

int main(void) {
    int score;
    scanf("%d", &score);
    if (score >= 90) {
        printf("A\n");
    } else if (score >= 80 && score < 90) {
        printf("B\n");
    } else if (score >= 70 && score < 80) {
        printf("C\n");
    } else if (score >= 60 && score < 70) {
        printf("D\n");
    } else {
        printf("E\n");
    }
    return 0;
}

