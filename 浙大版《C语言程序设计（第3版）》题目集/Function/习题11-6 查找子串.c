char *search(char *s, char *t) {
    char *str = NULL;
    int lens = 0;
    int lent = 0;
    for (int i = 0; s[i] != '\0'; i ++) {
        lens ++;
    }
    for (int i = 0; t[i] != '\0'; i ++) {
        lent ++;
    }
    if (lens < lent) return NULL;
    //printf("%d %d\n", lens, lent);
    int index = 0;
    for (int i = 0; i < lens; i ++) {
        if (s[i] == t[index]) {
            int flag = 1;
            for (int k = i; index < lent; k ++, index ++) {
                if (s[k] != t[index]) {
                    flag = 0;
                    index = 0;
                    break;
                }
            }
            if (flag) {
                return &s[i];
            }
        }
    }
    return str;
}