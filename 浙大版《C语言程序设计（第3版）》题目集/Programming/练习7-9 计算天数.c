#include <stdio.h>

int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void ) {
    int y, m, d;
    scanf("%d/%d/%d", &y, &m, &d);
    if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)) {
        month[2] = 29;
    }
    int ans = 1;
    int i = 1, j = 1;
    while (i <= m) {
        if (i == m && j == d) {
            break;
        }
        if (j == month[i]) {
            j = 1;
            ans ++;
            i ++;
        }
        j ++;
        ans ++;
    }
    printf("%d\n", ans);
    return 0;
}