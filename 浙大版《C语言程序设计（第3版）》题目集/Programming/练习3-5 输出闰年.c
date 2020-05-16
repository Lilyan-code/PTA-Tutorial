//
// Created by Acmer_ly on 2020/3/13.
//练习3-5 输出闰年 (15分)
#include <stdio.h>
int isLeap_Year(int year);

int main(void) {
    int y;
    int cnt = 0;
    scanf("%d", &y);
    if (y < 2001 || y > 2100) {
        printf("Invalid year!\n");
    } else {
        for (int i = 2001; i <= y; i ++) {
            if (isLeap_Year(i)) {
                cnt ++;
                printf("%d\n", i);
            }
        }
        if (cnt == 0) {
            printf("None\n");
        }
    }
    return 0;
}

int isLeap_Year(int year) {
    if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
        return 1;
    }
    return 0;
}
