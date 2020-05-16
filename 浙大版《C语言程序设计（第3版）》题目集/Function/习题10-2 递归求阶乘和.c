double fact( int n ) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return fact(n - 1) * n;
}
double factsum( int n ) {
    double ans = 0;
    for (int i = 1; i <= n; i ++) {
        ans += fact(i);
    }
    return ans;
}