int CountDigit( int number, int digit ) {
    int temp = 0, sum = 0;
    if (number == 0 && digit == 0) {
        return 1;
    }
    if (number < 0) {
        number = number - (2 * number);
    }
    while (number) {
        temp = number % 10;
        number /= 10;
        if (temp == digit) {
            sum ++;
        }
    }
    return sum;
}