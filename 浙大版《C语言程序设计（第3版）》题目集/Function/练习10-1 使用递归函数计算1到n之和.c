int sum( int n ) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    } 
    return sum(n - 1) + n;
}