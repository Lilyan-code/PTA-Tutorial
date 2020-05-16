double calc_pow( double x, int n ) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return x;
    }
    return calc_pow(x, n - 1) * x;
}