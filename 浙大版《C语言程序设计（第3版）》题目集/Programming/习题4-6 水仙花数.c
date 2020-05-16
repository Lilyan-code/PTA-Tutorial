//
// Created by Acmer_ly on 2020/3/14.
//习题4-6 水仙花数 (20分)

#include <stdio.h>
int power(int x, int y);
int check(int n, int m);

int main(void) {
    int n;
    scanf("%d", &n);
    switch (n) {
        case 3 :
            for (int i = 100; i <= 999; i ++)
                if (check(i, n)) {
                    printf("%d\n", i);
                }
            break;
        case 4:
            for (int i = 1000; i <= 9999; i ++)
                if (check(i, n)) {
                    printf("%d\n", i);
                }
            break;
        case 5:
            for (int i = 10000; i <= 99999; i ++)
                if (check(i, n)) {
                    printf("%d\n", i);
                }
            break;
        case 6:
            for (int i = 100000; i <= 999999; i ++)
                if (check(i, n)) {
                    printf("%d\n", i);
                }
            break;
        case 7:
            for (int i = 1000000; i <= 9999999; i ++)
                if (check(i, n)) {
                    printf("%d\n", i);
                }
            break;
    }
    return 0;
}

int check(int n, int m) {
    int a[8];
    int cnt = 0;
    int temp = n;
    while (temp) {
        a[cnt++] = temp % 10;
        temp /= 10;
    }
    int ans = 0;
    for (int i = 0; i < cnt; i ++) {
        ans += power(a[i], m);
    }
    if (ans == n) {
        return 1;
    }
    return 0;
}

int power(int x, int y) {
    int ans = 1;
    for (int i = 0; i < y; i ++) {
        ans*= x;
    }
    return ans;
}