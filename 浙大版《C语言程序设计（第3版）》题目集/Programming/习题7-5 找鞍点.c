#include <stdio.h>

int a[7][7];

int main(void ) {
    int n;
    int flag = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++)
        for (int j = 0; j < n; j ++)
            scanf("%d", &a[i][j]);
    
    
    for (int i = 0; i < n; i ++) {
        int r = -1, l = -1, t = 0;
        int max = -99999999, min = 99999999;
        for (int j = 0; j < n; j ++) {
            if (max <= a[i][j]) {
                max = a[i][j];
                r = i;
                l = j;
            }
        }
        for (int k = 0; k < n; k ++) {
            if (min >= a[k][l]) {
                min = a[k][l];
                t = k;
            }
        }
        if (t == r) {
            printf("%d %d\n", r, l);
            flag = 1;
            break;
        }
    }
    if (!flag) printf("NONE\n");
    return 0;
}