//
// Created by Acmer_ly on 2020/3/13.
//练习3-4 统计字符 (15分)
#include <stdio.h>

int main(void ) {
    int flag = 0;
    int cnt = 0;
    int letter = 0;
    int digit = 0;
    int blank = 0;
    int others = 0;
    char ch;
    while (scanf("%c", &ch) && cnt < 10) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            letter ++;
        } else if (ch == ' ' || ch == '\n') {
            blank ++;
        } else if (ch >= '0' && ch <= '9') {
            digit ++;
        } else {
            others ++;
        }
        cnt ++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, others);
    return 0;
}

