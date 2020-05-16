void StringCount( char *s ) {
    int upper_case = 0;
    int lower_case = 0;
    int blank = 0;
    int digit = 0;
    int others = 0;
    int len = 0;
    for (int i = 0; s[i] != '\0'; i ++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            upper_case++;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            lower_case++;
        } else if (s[i] == ' ') {
            blank++;
        } else if (s[i] >= '0' && s[i] <= '9') {
            digit++;
        } else {
            others++;
        }
    }
    printf("%d %d %d %d %d\n", upper_case, lower_case, blank, digit, others);
}