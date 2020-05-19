#include <stdio.h>

int a[15];

void swap(int a[], int i, int j) {
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++)
        scanf("%d", a + i);
    for (int i = 0; i < n; i ++) {
        for (int j = i + 1; j < n; j ++) 
            if (a[j] > a[i])
                swap(a, i, j);
    }
    for (int i = 0; i < n; i ++)
        if (i == n - 1)
            printf("%d\n", a[i]);
        else 
            printf("%d ", a[i]);
    return 0;
}