int search( int n ) {
    int ans = 0;
    int a[3];
    
    for (int i = 101; i <= n; i ++) {
        for (int j = 11; j <= 35; j ++) {
            if (i == j * j ) {
                int cnt = 0;
                int x = i;
                while (x) {
                a[cnt++] = x % 10;
                x /= 10;
            }
            if (a[0] == a[1] || a[0] == a[2] || a[1] == a[2]) ans ++;
            }
        }
    }
    return ans;
}
