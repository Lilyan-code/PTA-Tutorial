#include <stdio.h>

int a[10][10];
int temp[10];

int main(void ) {
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            temp[(j + (m % n)) % n] = a[i][j];
            
        }
       
        for (int j = 0; j < n; j ++) {
            a[i][j] = temp[j];
        }
    }
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}