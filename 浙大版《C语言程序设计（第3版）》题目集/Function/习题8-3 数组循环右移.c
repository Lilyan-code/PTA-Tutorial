int ArrayShift( int a[], int n, int m ) {
    int tmp[n];
    int cnt = 0;
    if (m < n) {
            for (int i = n - m ; i < n; i ++) {
            tmp[cnt ++] = a[i];
        }
        for (int i = 0; i < n - m; i ++) {
            tmp[cnt ++] = a[i];
        }
        for (int i = 0; i < n; i ++) {
            a[i] = tmp[i];
        }
    } else if (m > n) {
        m = m % n;
        for (int i = n - m ; i < n; i ++) {
            tmp[cnt ++] = a[i];
        }
        for (int i = 0; i < n - m; i ++) {
            tmp[cnt ++] = a[i];
        }
        for (int i = 0; i < n; i ++) {
            a[i] = tmp[i];
        }
    } 
}