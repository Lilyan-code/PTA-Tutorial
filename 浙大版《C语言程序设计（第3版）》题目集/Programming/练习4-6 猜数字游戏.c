//
// Created by Acmer_ly on 2020/3/14.
//练习4-6 猜数字游戏 (15分)

#include <stdio.h>

int main(void) {
    int x, n;
    scanf("%d%d", &x, &n);
    int a;
    int cnt = 0;
    while (1) {
        scanf("%d", &a);
        cnt ++;
        if (cnt < n && a < 0) {
            printf("Game Over\n");
            break;
        }
        if (cnt > n) {
            printf("Game Over\n");
            break;
        }
        if (a < 0) {
            break;
        }
        if (a == x) {
            if (cnt == 1) {
                printf("Bingo!\n");
            } else if (cnt <= 3) {
                printf("Lucky You!\n");
            } else if (cnt > 3 && cnt <= n) {
                printf("Good Guess!\n");
            }

            return 0;
        } else if (a < x) {
            printf("Too small\n");
        } else {
            printf("Too big\n");
        }
    }
    return 0;
}

