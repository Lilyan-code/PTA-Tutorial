int reverse( int number ) {
    int tmp[15];
    int cnt = 0;
    while (number) {
        tmp[cnt ++] = number % 10;
        number /= 10;
    }
    int ans = 0;
    int mul = 1;
    for (int i = cnt - 1; i >= 0; i --) {
        ans += tmp[i] * mul;
        mul *= 10;
    }
    return ans;
}