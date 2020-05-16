double fn( double x, int n ) {
    double ans = 0;
    if (n == 1) {
        ans += x;
    } else {
        ans += x - fn(x, n - 1) * x;
    }
    return ans;
}