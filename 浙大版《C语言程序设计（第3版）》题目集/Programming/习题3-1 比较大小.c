//
// Created by Acmer_ly on 2020/3/13.
//习题3-1 比较大小 (10分)
#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;
    scanf("%d%d%d", &a, &b, &c);
    int temp;
    if (a > b) {
        if (a > c) {
            if (b > c) {
                temp = a;
                a = c;
                c = temp;
            } else {
                temp = a;
                a = b;
                b = c;
                c = temp;
            }
        } else {
            temp = a;
            a = b;
            b = temp;
        }
    } else {
        if (b > c) {
            if (a > c) {
                temp = b;
                b = a;
                a = c;
                c = temp;
            } else {
                temp = b;
                b = c;
                c = temp;
            }
        }
    }
    printf("%d->%d->%d\n", a, b, c);
    return 0;
}

