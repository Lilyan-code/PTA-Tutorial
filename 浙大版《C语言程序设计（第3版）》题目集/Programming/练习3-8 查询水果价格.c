//
// Created by Acmer_ly on 2020/3/13.
//练习3-8 查询水果价格 (15分)

#include <stdio.h>

int main(void) {
    double a[5];
    a[0] = 0;
    a[1] = 3;
    a[2] = 2.5;
    a[3] = 4.1;
    a[4] = 10.2;
    printf("[1] apple\n");
    printf("[2] pear\n");
    printf("[3] orange\n");
    printf("[4] grape\n");
    printf("[0] exit\n");
    int x;
    int cnt = 0;
    while (1) {
        scanf("%d", &x);
        if (cnt >= 5) {
            break;
        }
        if (x == 0) {
            //printf("price = %.2lf\n", a[x]);
            break;
        } else if (x == 1) {
            printf("price = %.2lf\n", a[x]);
        } else if (x == 2) {
            printf("price = %.2lf\n", a[x]);
        } else if (x == 3) {
            printf("price = %.2lf\n", a[x]);
        } else if (x == 4) {
            printf("price = %.2lf\n", a[x]);
        } else {
            printf("price = %.2lf\n", 0);
        }
        cnt ++;
    }
    return 0;
}

