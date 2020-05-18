#include <stdio.h>

int a[15][15];

int main(void ) {
    int n;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }
    int temp = 0;
    //处理最后一行
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
           if (i == n - 1) {
               temp += a[i][j];
           }
        }
    }
    //处理最后一列
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            if (j == n - 1) {
                temp += a[i][j];
            }
        }
    }
    //处理副对角线
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            if (i + j == n - 1) {
                temp += a[i][j];
            }
        }
    }
    //自己画图可以发现最后一行、最后一列、副对角线重合了左下角，右下角以及右上角三个元素，减掉即可。
    temp = temp - a[n - 1][0] - a[0][n - 1] - a[n -1][n - 1];
    sum = sum - temp;
    printf("%d\n", sum);
    return 0;
}