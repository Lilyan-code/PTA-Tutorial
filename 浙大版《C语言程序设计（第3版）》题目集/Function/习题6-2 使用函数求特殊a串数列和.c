int fn( int a, int n ) {
    int ans = 0;
    while (n) {
        ans += a;
        a *= 10;
        n --;
    }
    return ans;
}
int SumA( int a, int n ) {
    int result = 0;
    for (int i = 1; i <= n; i ++) {
        result += fn(a, i);
    }
    return result;
}