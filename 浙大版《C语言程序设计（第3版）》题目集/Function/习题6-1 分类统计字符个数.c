void StringCount( char s[]) {
    int letter, blank, digit, other;
    
    letter = 0;
    blank = 0;
    digit = 0;
    other = 0;
    for (int i = 0; s[i] != '\0'; i ++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            letter ++;
        } else if (s[i] == ' ' || s[i] == '\n') {
            blank ++;
        } else if (s[i] >= '0' && s[i] <= '9') {
            digit ++;
        } else {
            other ++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
}