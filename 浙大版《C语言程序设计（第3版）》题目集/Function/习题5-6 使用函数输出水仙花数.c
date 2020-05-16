int narcissistic( int number ) {
    int cnt = 0, temp = number;
    int a[5] = {0, 0, 0, 0, 0};
    while (number) {
        a[cnt++] = number % 10;
        number /= 10;
    }
    int sum = 0;
    for (int i = 0; i < cnt; i ++) {
        sum += pow(a[i], cnt);
    }
    if (sum == temp) {
        return 1;
    }
    return 0;
}

void PrintN( int m, int n ) {
    
    for (int i = m + 1; i < n; i ++) {
        if(narcissistic(i)) {
            printf("%d\n", i);
        }
    }
}