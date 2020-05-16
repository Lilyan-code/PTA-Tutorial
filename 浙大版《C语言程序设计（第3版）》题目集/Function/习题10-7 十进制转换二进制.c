void dectobin( int n ) {
    if (n == 0) {
        printf("0");
        return ;
    }
    int ans[20];
    int cnt = 0;
    while (n) {
        ans[cnt++] = n % 2;
        n /= 2;
    }
    for (int i = cnt - 1; i >= 0; i --) {
        printf("%d", ans[i]);
    }
}