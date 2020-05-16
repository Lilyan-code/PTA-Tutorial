int getindex( char *s ) {
    int len = strlen(s);
    char *s0 = "Sunday";
    char *s1 = "Monday";
    char *s2 = "Tuesday";
    char *s3 = "Wednesday";
    char *s4 = "Thursday";
    char *s5 = "Friday";
    char *s6 = "Saturday";
    if (strcmp(s, s0) == 0) {
        return 0;
    } else if (strcmp(s, s1) == 0) {
        return 1;
    } else if (strcmp(s, s2) == 0) {
        return 2;
    } else if (strcmp(s, s3) == 0) {
        return 3;
    } else if (strcmp(s, s4) == 0) {
        return 4;
    } else if (strcmp(s, s5) == 0) {
        return 5;
    } else if (strcmp(s, s6) == 0) {
        return 6;
    } else {
        return -1;
    }
}

