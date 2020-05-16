//
// Created by Acmer_ly on 2020/3/14.
//习题4-11 兔子繁衍问题 (15分)

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int ans = 0;
    int f1 = 1;
    int f2 = 1;
    int f3;
    if (n == 1) {
        ans = 1;
    } else {
        ans = 2;
        for (int i = 3; ; i ++) {
            ans ++;
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
            if (f3 >= n) {
                break;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}

