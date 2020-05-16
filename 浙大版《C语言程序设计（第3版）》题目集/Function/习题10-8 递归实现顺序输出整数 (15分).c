void printdigits( int n ) {
    if (n < 10) {
        printf("%d\n", n);
    } else {
        printdigits(n / 10);
        printf("%d\n", n % 10);
    }
    
    
}