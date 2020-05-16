char *match( char *s, char ch1, char ch2 ) {
    int flag = 0;
    int start = -1;  //ch1匹配位置
    int end = -1;  //ch2匹配位置
    char *t = s;
    char *str;
    for (int i = 0; s[i] != '\0'; i ++) {
        if (s[i] == ch1) {
            flag = 1;
            start = i;
            break;
        }
    }

    for (int i = 0; s[i] != '\0'; i ++) {
        if (flag == 1) {
            if (s[i] == ch2 ) {
                flag = 2;
                end = i;
                break;
            }
        } else {
            if (s[i] == ch2 ) {
                flag = 3;
                end = i;
                break;
            }
        }
    }
    if (flag == 0) {
        printf("\n");
    } else if (flag == 1) {
        for(;*t != NULL; *t++) {
            if (*t == ch1) {
                str = t;
                break;
            }
        }
        printf("%s\n", str);
    } else if(flag == 2){
        for(;*t != NULL; *t++) {
            if (*t == ch1) {
                str = t;
                break;
            }
        }
        for (int i = start; i <= end; i ++) {
            printf("%c", s[i]);
        }
        printf("\n");
    } else if (flag == 3) {
        int i;
        for (i = 0; s[i] != '\0'; i ++) {

        }
        printf("\n");
        str = &s[i];
    }

    //printf("%s\n", str);
    return str;
}