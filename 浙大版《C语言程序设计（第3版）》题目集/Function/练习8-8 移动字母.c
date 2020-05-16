void Shift( char s[] ) {
    char t1 = s[0], t2 = s[1], t3 = s[2];
    int len = strlen(s);
    for (int i = 0, j = 3; j < len; i++, j++) {
        s[i] = s[j];
    }
    s[len - 3] = t1;
    s[len - 2] = t2;
    s[len - 1] = t3;
}