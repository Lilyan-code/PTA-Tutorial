int prime( int p ) {
    if (p <= 0 || p == 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= p; i ++) {
        if (p % i == 0) {
            return 0;
        }
    }
    return 1;
}
void Goldbach( int n ) {
    int flag = 0;
    for (int i = 1; i < n; i ++) {
        if (flag) break;
        for (int j = n - 1; j >= i; j --) {
            if (prime(i) && prime(j) && (i + j == n)) {
                printf("%d=%d+%d", n, i, j);
                flag = 1;
                break;
            }
        }
    }
    if (!flag) return ;
}