int fib( int n ) {
    int fa = 1;
    int fb = 1;
    int fc;
    if (n == 1 || n == 2) {
        return 1;
    }
    for (int i = 3; i <= n; i ++) {
        fc = fa + fb;
        fa = fb;
        fb = fc;
    }
    return fc;
}
void PrintFN( int m, int n ) {
    int cnt = 0;
    int tmp[30];
    int ans[30];
    for(int i = 1; i <= 30; i ++) {
        tmp[i] = fib(i);
    }
    for (int i = 1; i  <= 30; i ++) {
        if (tmp[i] >= m && tmp[i] <= n) {
            ans[cnt++] = tmp[i];
        }
    }
    if (cnt == 0) {
        printf("No Fibonacci number\n");
    } else {
        for (int i = 0; i < cnt - 1; i ++)
        printf("%d ", ans[i]);
        printf("%d", ans[cnt - 1]);
    }
}